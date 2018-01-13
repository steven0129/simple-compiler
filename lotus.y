%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define YYDEBUG 1
#ifndef DBG
int debug=0;
#define DBG(...) \
    if(debug) { __VA_ARGS__; }
#endif
#ifndef IDENT
int iCount=0;
#define IDENT(NUM, ...) \
    for(iCount=0; iCount< NUM; iCount++) fprintf(stdout, "\t"); \
    __VA_ARGS__;
#endif
int ifCount=1;
int whileCount=1;
int registerCount=0;
%}
%union {
    int integer;
    char* string;
}
%locations
%token<string> IDENTIFIER
%token<integer> INTEGER
%token<string> OPENP CLOSEP // ( )
%token<string> BIGOPENP BIGCLOSEP // { }
%token<string> INT // int
%token<string> SEMICOLON // ;
%token<string> ASSIGN // =
%token<string> COMMA // ,
%token<string> AND OR // &&, ||
%token<string> NOT // !
%token<string> EQV NONEQV GREEQV GRE LESSEQV LESS
%token<string> ADD SUB // +, -
%token<string> MUL DIV MOD // *, /, %
%token<string> IF // if
%nonassoc IFX
%nonassoc ELSE // else
%token<string> EXIT // exit
%token<string> WHILE // while
%token<string> WRITE READ // write read
%token<string> RETURN // return
%right UMINUS
%right UNOT
%%
program: 
    IDENTIFIER OPENP CLOSEP function_body { DBG( fprintf(stdout, "program -> Identifier ( ) function_body\n"); ) }
    ;
function_body: 
    BIGOPENP emit_data variable_declarations emit_text statements BIGCLOSEP { DBG( fprintf(stdout, "function_body -> { variable_declarations statements }\n"); ) }
    ;
emit_data:
    %empty { IDENT(1, fprintf(stdout, ".data\n"); ) }
    ;
emit_text:
    %empty { 
        IDENT(1, fprintf(stdout, ".text\n"); )
        IDENT(0, fprintf(stdout, "main:\n"); )
    }
    ;
emit_terminate:
    %empty {
        IDENT(1, fprintf(stdout, "li"); )
        IDENT(1, fprintf(stdout, "$v0, 10"); )
        IDENT(1, fprintf(stdout, "# terminate program\n"); )
        IDENT(1, fprintf(stdout, "syscall\n"); )
    }
    ;
variable_declarations: 
    %empty { DBG( fprintf(stdout, "variable_declarations -> empty\n"); ) }
    | variable_declarations variable_declaration { DBG( fprintf(stdout, "variable_declarations -> variable_declarations variable_declaration\n"); ) }
    ;
variable_declaration: 
    INT IDENTIFIER SEMICOLON { 
        DBG( fprintf(stdout, "variable_declaration -> int Identifier ;\n"); )
        IDENT( 0, fprintf(stdout, "%s:", $2); )
        IDENT( 1, fprintf(stdout, ".word"); )
        IDENT( 1, fprintf(stdout, "0 # int %s", $2); )  // int IDENTIFIER
        IDENT( 0, fprintf(stdout, "\n"); )
    }
    ;
statements:
    %empty { DBG( fprintf(stdout, "statements -> empty\n"); ) }
    |   statements statement { DBG( fprintf(stdout, "statements -> statements statement\n"); ) }
    ;
statement:
    assignment_statement { DBG( fprintf(stdout, "statement -> assignment_statement\n"); ) }
    |   compound_statement { DBG( fprintf(stdout, "statement -> compound_statement\n"); ) }
    |   if_statement { DBG( fprintf(stdout, "statement -> if_statement\n"); ) }
    |   while_statement { DBG( fprintf(stdout, "statement -> while_statement\n"); ) }
    |   exit_statement { DBG( fprintf(stdout, "statement -> exit_statement\n") ) }
    |   read_statement { DBG( fprintf(stdout, "statement -> read_statement\n"); ) }
    |   write_statement { DBG( fprintf(stdout, "statement -> write_statement\n"); ) }
    ;
read_statement:
    READ IDENTIFIER SEMICOLON { 
        DBG( fprintf(stdout, "read_statement -> read Identifier ;\n"); )
        IDENT( 1, fprintf(stdout, "li"); )
        IDENT( 1, fprintf(stdout, "$v0, 5\n"); ) // read
        IDENT( 1, fprintf(stdout, "syscall\n"); )
        IDENT( 1, fprintf(stdout, "la"); )
        IDENT( 1, fprintf(stdout, "$t0, %s\n", $2); )
        IDENT( 1, fprintf(stdout, "sw"); )
        IDENT( 1, fprintf(stdout, "$v0, 0($t0)\n"); ) // read variable
    }
    ;
write_statement:
    WRITE arith_expression SEMICOLON { 
        DBG( fprintf(stdout, "write_statement -> write arith_expression ;\n"); )
        IDENT(1, fprintf(stdout, "move"); )
        IDENT(1, fprintf(stdout, "$a0, $t0\n"); )
        IDENT(1, fprintf(stdout, "li"); )
        IDENT(1, fprintf(stdout, "$v0, 1\n"); )
        IDENT(1, fprintf(stdout, "syscall\n"))
    }
    ;
exit_statement:
    EXIT SEMICOLON emit_terminate { DBG( fprintf(stdout, "exit_statement -> exit ;\n"); ) }
    ;
while_statement:
    WHILE OPENP emit_while bool_expression emit_while_branch CLOSEP emit_while statement jmp2start emit_while { DBG( fprintf(stdout, "while_statement -> while ( bool_expression ) statement\n"); ) }
    ;
emit_while_branch:
    %empty {
        if(strcmp($<string>0, "<") == 0) { IDENT( 1, fprintf(stdout, "blt"); ) }
        else if(strcmp($<string>0, ">") == 0) { IDENT( 1, fprintf(stdout, "bgt"); ) }
        
        IDENT( 1, fprintf(stdout, "$t0, $t1, W%d\n", whileCount); )
        IDENT( 1, fprintf(stdout, "b"); )
        IDENT( 1, fprintf(stdout, "W%d\n", whileCount+1); )
    }
    ;
emit_while:
    %empty {
        IDENT( 0, fprintf(stdout, "W%d:\n", whileCount); )
        whileCount++;
        registerCount=0;
    }
    ;
jmp2start:
    %empty {
        IDENT( 1, fprintf(stdout, "b"); )
        IDENT( 1, fprintf(stdout, "W%d\n", whileCount - 2); )
    }
    ;
if_statement:
    IF OPENP bool_expression emit_if_branch CLOSEP emit_label statement emit_label { DBG( fprintf(stdout, "if_statement -> if ( bool_expression ) statement\n"); ) }
    | IF OPENP bool_expression emit_if_branch CLOSEP emit_label statement jmp2end ELSE emit_label statement emit_label { DBG( fprintf(stdout, "if_statement -> if ( bool_expression ) statement else statement\n"); ) }
    ;
jmp2end:
    %empty {
        IDENT( 1, fprintf(stdout, "b"); )
        IDENT( 1, fprintf(stdout, "L%d\n", ifCount+1); )
    }
    ;
emit_if_branch:
    %empty {
        if(strcmp($<string>0, "<") == 0) { IDENT( 1, fprintf(stdout, "blt"); ) }
        else if(strcmp($<string>0, ">") == 0) { IDENT( 1, fprintf(stdout, "bgt"); ) }
        
        IDENT( 1, fprintf(stdout, "$t0, $t1, L%d\n", ifCount); )
        IDENT( 1, fprintf(stdout, "b"); )
        IDENT( 1, fprintf(stdout, "L%d\n", ifCount+1); )
    }
    ;
emit_label:
    %empty {
        IDENT( 0, fprintf(stdout, "L%d:\n", ifCount); ) // new label
        ifCount++;
        registerCount=0;
    }
    ;
bool_expression:
    bool_term { DBG( fprintf(stdout, "bool_expression -> bool_term\n"); ) }
    | bool_expression OR bool_term { DBG( fprintf(stdout, "bool_expression -> bool_expression or bool_term\n"); ) }
    ;
bool_term:
    bool_factor { DBG( fprintf(stdout, "bool_term -> bool_factor\n"); ) }
    | bool_term AND bool_factor { DBG( fprintf(stdout, "bool_term -> bool_term && bool_factor\n"); ) }
    ;
bool_factor:
    bool_primary { DBG( fprintf(stdout, "bool_factor -> bool_primary\n"); ) }
    | NOT bool_primary %prec UNOT { DBG( fprintf(stdout, "bool_factor -> ! bool_primary\n"); ) }
    ;
bool_primary:
    arith_expression EQV arith_expression { DBG( fprintf(stdout, "bool_primary -> arith_expression == arith_expression\n"); ) }
    |   arith_expression NONEQV arith_expression { DBG( fprintf(stdout, "bool_primary -> arith_expression != arith_expression\n"); ) }
    |   arith_expression GRE arith_expression { 
            DBG( fprintf(stdout, "bool_primary -> arith_expression > arith_expression\n"); )
            int absVal=abs( $<integer>3 );
            $<string>$ = $<string>2;
        }
    |   arith_expression GREEQV arith_expression { DBG( fprintf(stdout, "bool_primary -> arith_expression >= arith_expression\n"); ) }
    |   arith_expression LESS arith_expression { 
            DBG( fprintf(stdout, "bool_primary -> arith_expression < arith_expression\n"); )
            int absVal=abs( $<integer>3 );
            $<string>$ = $<string>2;
        }
    |   arith_expression LESSEQV arith_expression { DBG( fprintf(stdout, "bool_primary -> arith_expression <= arith_expression\n"); ) }
    ;
compound_statement:
    BIGOPENP statements BIGCLOSEP { DBG( fprintf(stdout, "compound_statement -> { statements }\n"); ) }
    ;
assignment_statement:
    IDENTIFIER ASSIGN arith_expression SEMICOLON { 
        DBG( fprintf(stdout, "assignment_statement -> Identifier = arith_expression ;\n") )
        IDENT( 1, fprintf(stdout, "la"); )
        IDENT( 1, fprintf(stdout, "$t1, %s\n", $<string>1); )
        IDENT( 1, fprintf(stdout, "sw"); )
        IDENT( 1, fprintf(stdout, "$t0, 0($t1)\n"); )
    }
    ;
arith_expression:
    arith_term { DBG( fprintf(stdout, "arith_expression -> arith_term\n"); ) }
    |   arith_expression ADD arith_term { 
            DBG( fprintf(stdout, "arith_expression -> arith_expression + arith_term\n"); )
            IDENT( 1, fprintf(stdout, "add"); )
            IDENT( 1, fprintf(stdout, "$t0, $t0, $t1\n"); )
            registerCount=0;
        }
    |   arith_expression SUB arith_term { 
            DBG( fprintf(stdout, "arith_expression -> arith_expression - arith_term\n"); )
            IDENT( 1, fprintf(stdout, "sub"); )
            IDENT( 1, fprintf(stdout, "$t0, $t0, $t1\n"); )
            registerCount=0;
        }
    ;
arith_term: 
    arith_factor { DBG( fprintf(stdout, "arith_term -> arith_factor\n"); ) }
    | arith_term MUL arith_factor { 
            DBG( fprintf(stdout, "arith_term -> arith_term * arith_factor\n"); )
            IDENT( 1, fprintf(stdout, "mul"); )
            IDENT( 1, fprintf(stdout, "$t0, $t0, $t1\n"); )
            registerCount=0;
        }
    | arith_term DIV arith_factor { 
            DBG( fprintf(stdout, "arith_term -> arith_term / arith_factor\n"); )
            IDENT( 1, fprintf(stdout, "div"); )
            IDENT( 1, fprintf(stdout, "$t0, $t0, $t1\n"); )
            registerCount=0;
        }
    | arith_term MOD arith_factor { 
            DBG( fprintf(stdout, "arith_term -> arith_term % arith_factor\n"); )
            IDENT( 1, fprintf(stdout, "rem"); )
            IDENT( 1, fprintf(stdout, "$t0, $t0, $t1\n"); )
            registerCount=0;
        }
    ;
arith_factor:
    arith_primary { DBG( fprintf(stdout, "arith_factor -> arith_primary\n"); ) }
    | SUB arith_primary %prec UMINUS { 
        DBG( fprintf(stdout, "arith_factor -> - arith_primary\n"); )
        IDENT( 1, fprintf(stdout, "neg");)
        IDENT( 1, fprintf(stdout, "$t%d, $t%d\n", registerCount-1, registerCount-1); )
        $<integer>$ = - $<integer>2;
    }
    ;
arith_primary:
    INTEGER { 
        DBG( fprintf(stdout, "arith_primary -> Integer\n"); )
        IDENT( 1, fprintf(stdout, "li"); )
        IDENT( 1, fprintf(stdout, "$t%d, %d\n", registerCount++, $<integer>1); )
    }
    | IDENTIFIER { 
        DBG( fprintf(stdout, "arith_primary -> Identifier\n"); )
        IDENT( 1, fprintf(stdout, "la"); )
        IDENT( 1, fprintf(stdout, "$t%d, %s\n", registerCount, $<string>1); )
        IDENT( 1, fprintf(stdout, "lw"); )
        IDENT( 1, fprintf(stdout, "$t%d, 0($t%d)\n", registerCount, registerCount); )
        registerCount++;
    }
    | OPENP arith_expression CLOSEP { DBG( fprintf(stdout, "arith_primary -> ( arith_expression )\n"); ) }
    ;
%%
extern FILE *yyin;
main(int argc, char **argv) {
    if(argc==2 && strcmp(argv[1], "-p")==0)
        debug=1;
    do {
        yyparse();
    } while(!feof(yyin));
}