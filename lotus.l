%{
#include"lotus.tab.h"
char* errorToken;
void yyerror(int, char*);
union YYSTYPE yylval;
%}
%x COMMENT
%option yylineno

identifier [A-Za-z_0-9][A-Za-z_0-9]*
delim [ \t\n\r]
digit [0-9]
operator "+"|"-"|"*"|"/"|"%"|"=="|"!="|">="|">"|"<="|"<"|"&&"|"||"|"!"|"="|";"|","|"("|")"|"{"|"}"
%%
"//" { BEGIN(COMMENT); }
<COMMENT>\n { BEGIN(INITIAL); }
<COMMENT>. /*do nothing*/;

{delim}+ /*do nothing*/;
{digit}+ { yylval.integer=atoi(yytext); return INTEGER; }
{operator} { 
    if(strcmp(yytext, "+")==0) { yylval.string=yytext; return ADD; }
    else if(strcmp(yytext, "-")==0) { yylval.string=yytext; return SUB; }
    else if(strcmp(yytext, "*")==0) { yylval.string=yytext; return MUL; }
    else if(strcmp(yytext, "/")==0) { yylval.string=yytext; return DIV; }
    else if(strcmp(yytext, "%")==0) { yylval.string=yytext; return MOD; }
    else if(strcmp(yytext, "==")==0) { yylval.string=yytext; return EQV; }
    else if(strcmp(yytext, "!=")==0) { yylval.string=yytext; return NONEQV; }
    else if(strcmp(yytext, ">=")==0) { yylval.string=yytext; return GREEQV; }
    else if(strcmp(yytext, ">")==0) { yylval.string=yytext; return GRE; }
    else if(strcmp(yytext, "<=")==0) { yylval.string=yytext; return LESSEQV; }
    else if(strcmp(yytext, "<")==0) { yylval.string=yytext; return LESS; }
    else if(strcmp(yytext, "&&")==0) { yylval.string=yytext; return AND; }
    else if(strcmp(yytext, "||")==0) { yylval.string=yytext; return OR; }
    else if(strcmp(yytext, "!")==0) { yylval.string=yytext; return NOT; }
    else if(strcmp(yytext, "=")==0) { yylval.string=yytext; return ASSIGN; }
    else if(strcmp(yytext, ";")==0) { yylval.string=yytext; return SEMICOLON; }
    else if(strcmp(yytext, ",")==0) { yylval.string=yytext; return COMMA; }
    else if(strcmp(yytext, "(")==0) { yylval.string=yytext; return OPENP; }
    else if(strcmp(yytext, ")")==0) { yylval.string=yytext; return CLOSEP; }
    else if(strcmp(yytext, "{")==0) { yylval.string=yytext; return BIGOPENP; }
    else if(strcmp(yytext, "}")==0) { yylval.string=yytext; return BIGCLOSEP; }
 }

{identifier} {
    if(strcmp(yytext, "else")==0) { yylval.string=yytext; return ELSE; }
    else if(strcmp(yytext, "exit")==0) { yylval.string=yytext; return EXIT; }
    else if(strcmp(yytext, "int")==0) { yylval.string=yytext; return INT; }
    else if(strcmp(yytext, "if")==0) { yylval.string=yytext; return IF; }
    else if(strcmp(yytext, "read")==0) { yylval.string=yytext; return READ; }
    else if(strcmp(yytext, "return")==0) { yylval.string=yytext; return RETURN; }
    else if(strcmp(yytext, "while")==0) { yylval.string=yytext; return WHILE; }
    else if(strcmp(yytext, "write")==0) { yylval.string=yytext; return WRITE; }
    else { yylval.string=yytext; return IDENTIFIER; }
}


. { yylval.integer=yylineno; errorToken=yytext; return ERROR; }
%%

int main(int argc,char** argv) {
    if(argc==3 && strcmp(argv[1], "-s")==0) {
        FILE *file;
        file=fopen(argv[2], "r");
        if(!file) exit(1);

        yyin=file;
        int token;
        while(token=yylex()) {
            switch(token) {
                case ERROR: 
                    yyerror(yylval.integer, errorToken);
                    break;
                case ADD:
                case SUB:
                case MUL:
                case DIV:
                case MOD:
                case EQV:
                case NONEQV:
                case GREEQV:
                case GRE:
                case LESSEQV:
                case LESS:
                case AND:
                case OR:
                case NOT:
                case ASSIGN:
                case SEMICOLON:
                case COMMA:
                case OPENP:
                case CLOSEP:
                case BIGCLOSEP:
                case BIGOPENP:
                    printf("Operator: %s\n", yylval.string);
                    break;
                case INTEGER:
                    printf("Integer Constant: %d\n", yylval.integer);
                    break;
                case ELSE:
                case EXIT:
                case INT:
                case IF:
                case READ:
                case RETURN:
                case WHILE:
                case WRITE:
                case IDENTIFIER: {
                        int keyword=0;
                        int reversedWord[8] = {ELSE,EXIT,INT,IF,READ,RETURN,WHILE,WRITE};
                        int i=0;
                        for(i=0; i<8;i++) {
                            if(reversedWord[i]==token)  {
                                printf("Keyword: %s\n", yylval.string);
                                keyword=1;
                                break;
                            }
                        }

                        if(keyword==0) printf("Identifier: %s\n", yylval.string);
                    }
                    
                    break;
            }
        }
    } else if(argc==2){
        FILE *file;
        file=fopen(argv[1], "r");
        if(!file) exit(1);

        yyin=file;
        int token;
        while(token=yylex()) {
            switch(token) {
                case ERROR:
                    yyerror(yylval.integer, errorToken);
                    break;
            }
        }
    }

    return 0;
}

void yyerror(int lineNum, char* token) {
    fprintf(stderr, "Lexical error: line %d: unknown character %c\n", lineNum, token[0]);
}