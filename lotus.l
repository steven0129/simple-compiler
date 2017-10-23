%{
#include"lotus.tab.h"
void yyerror(int, char*);
%}
%x comment
%option noyywrap
%option yylineno

token [A-Za-z_0-9][A-Za-z_0-9]*
delim [ \t\n\r]
digit [0-9]
reversedWord "else"|"exit"|"int"|"if"|"read"|"return"|"while"|"write"
operator "+"|"-"|"*"|"/"|"%"|"=="|"!="|">="|">"|"<="|"<"|"&&"|"||"|"!"|"="|";"|","|"("|")"|"{"|"}"
%%
"//" { BEGIN(comment); }
<comment>\n { BEGIN(INITIAL); }
<comment>. /*do nothing*/;

{delim}+ /*do nothing*/;
{reversedWord} { printf("Keywork: %s\n", yytext); }
{digit}+ { printf("Integer Constant: %s\n", yytext); }
{operator} { printf("Operator: %s \n", yytext); }
{token} { printf("Identifier: %s\n", yytext); }
. { yyerror(yylineno, yytext); }
%%

void yyerror(int lineNum, char* token) {
    fprintf(stderr, "Lexical error: line %d: unknown character %c\n", lineNum, token[0]);
}

int main(int argc,char** argv) {
    if(argc==3 && strcmp(argv[1], "-s")==0) {
        FILE *file;
        file=fopen(argv[2], "r");
        if(!file) {
            fprintf(stderr, "Could not open %s\n", argv[2]);
            exit(1);
        }

        yyin=file;
        yylex();
    } else {
        printf("Usage: ./scanner -s file.lotus\n");
    }

    return 0;
}
