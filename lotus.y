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
#define IDENT(NUM, ...) \
    int i; \
    for(i=0; i< NUM; i++) fprintf(stdout, "\t"); \
    __VA_ARGS__;
#endif
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
    IDENTIFIER OPENP CLOSEP function_body { 
        DBG( fprintf(stdout, "program -> Identifier ( ) function_body\n"); ) 
    }
    ;

function_body: 
    BIGOPENP variable_declarations statements BIGCLOSEP { DBG( fprintf(stdout, "function_body -> { variable_declarations statements }\n"); ) }
    ;

variable_declarations: 
    %empty { DBG( fprintf(stdout, "variable_declarations -> empty\n"); ) }
    |   variable_declarations variable_declaration {  DBG( fprintf(stdout, "variable_declarations -> variable_declarations variable_declaration\n"); ) }
    ;

variable_declaration: 
    INT IDENTIFIER SEMICOLON { 
        DBG( fprintf(stdout, "variable_declaration -> int Identifier ;\n"); )
        printf("%s %s %s\n",$1, $2, $3);
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
    READ IDENTIFIER SEMICOLON { DBG( fprintf(stdout, "read_statement -> read Identifier ;\n"); ) }
    ;

write_statement:
    WRITE arith_expression SEMICOLON { DBG( fprintf(stdout, "write_statement -> write  arith_expression ;\n"); ) }
    ;

exit_statement:
    EXIT SEMICOLON { DBG( fprintf(stdout, "exit_statement -> exit ;\n"); ) }
    ;

while_statement:
    WHILE OPENP bool_expression CLOSEP statement { DBG( fprintf(stdout, "while_statement -> while ( bool_expression ) statement\n"); ) }
    ;

if_statement:
    IF OPENP bool_expression CLOSEP statement %prec IFX { DBG( fprintf(stdout, "if_statement -> if ( bool_expression ) statement\n"); ) }
    |   IF OPENP bool_expression CLOSEP statement ELSE statement { DBG( fprintf(stdout, "if_statement -> if ( bool_expression ) statement else statement\n"); ) }
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
    |   arith_expression GRE arith_expression { DBG( fprintf(stdout, "bool_primary -> arith_expression > arith_expression\n"); ) }
    |   arith_expression GREEQV arith_expression { DBG( fprintf(stdout, "bool_primary -> arith_expression >= arith_expression\n"); ) }
    |   arith_expression LESS arith_expression { DBG( fprintf(stdout, "bool_primary -> arith_expression < arith_expression\n"); ) }
    |   arith_expression LESSEQV arith_expression { DBG( fprintf(stdout, "bool_primary -> arith_expression <= arith_expression\n"); ) }
    ;

compound_statement:
    BIGOPENP statements BIGCLOSEP { DBG( fprintf(stdout, "compound_statement -> { statements }\n"); ) }
    ;

assignment_statement:
    IDENTIFIER ASSIGN arith_expression SEMICOLON {DBG( fprintf(stdout, "assignment_statement -> Identifier = arith_expression ;\n") )}
    ;

arith_expression:
    arith_term { DBG( fprintf(stdout, "arith_expression -> arith_term\n"); ) }
    |   arith_expression ADD arith_term { DBG( fprintf(stdout, "arith_expression -> arith_expression + arith_term\n"); ) }
    |   arith_expression SUB arith_term { DBG( fprintf(stdout, "arith_expression -> arith_expression - arith_term\n"); ) }
    ;

arith_term: 
    arith_factor { DBG( fprintf(stdout, "arith_term -> arith_factor\n"); ) }
    | arith_term MUL arith_factor { DBG( fprintf(stdout, "arith_term -> arith_term * arith_factor\n"); ) }
    | arith_term DIV arith_factor { DBG( fprintf(stdout, "arith_term -> arith_term / arith_factor\n"); ) }
    | arith_term MOD arith_factor { DBG( fprintf(stdout, "arith_term -> arith_term % arith_factor\n"); ) }
    ;

arith_factor:
    arith_primary { DBG( fprintf(stdout, "arith_factor -> arith_primary\n"); ) }
    | SUB arith_primary %prec UMINUS { DBG( fprintf(stdout, "arith_factor -> - arith_primary\n"); ) }
    ;

arith_primary:
    INTEGER { DBG( fprintf(stdout, "arith_primary -> Integer\n"); ) }
    | IDENTIFIER { DBG( fprintf(stdout, "arith_primary -> Identifier\n"); ) }
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