%{
#include <stdio.h>
#include "lotus.tab.h"

extern YYSTYPE yylval;
void parseStr(char* text) {
    yylval.string=malloc(strlen(yytext));
    strncpy(yylval.string, yytext, strlen(yytext));
}
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

{delim}   /*do nothing*/;
{digit}+ { yylval.integer=atoi(yytext); return INTEGER; }
{operator} {
    if(strcmp(yytext, "+")==0) { parseStr(yytext); return ADD; }
    else if(strcmp(yytext, "-")==0) { parseStr(yytext); return SUB; }
    else if(strcmp(yytext, "*")==0) { parseStr(yytext); return MUL; }
    else if(strcmp(yytext, "/")==0) { parseStr(yytext); return DIV; }
    else if(strcmp(yytext, "%")==0) { parseStr(yytext); return MOD; }
    else if(strcmp(yytext, "==")==0) { parseStr(yytext); return EQV; }
    else if(strcmp(yytext, "!=")==0) { parseStr(yytext); return NONEQV; }
    else if(strcmp(yytext, ">=")==0) { parseStr(yytext); return GREEQV; }
    else if(strcmp(yytext, ">")==0) { parseStr(yytext); return GRE; }
    else if(strcmp(yytext, "<=")==0) { parseStr(yytext); return LESSEQV; }
    else if(strcmp(yytext, "<")==0) { parseStr(yytext); return LESS; }
    else if(strcmp(yytext, "&&")==0) { parseStr(yytext); return AND; }
    else if(strcmp(yytext, "||")==0) { parseStr(yytext); return OR; }
    else if(strcmp(yytext, "!")==0) { parseStr(yytext); return NOT; }
    else if(strcmp(yytext, "=")==0) { parseStr(yytext); return ASSIGN; }
    else if(strcmp(yytext, ";")==0) { parseStr(yytext); return SEMICOLON; }
    else if(strcmp(yytext, ",")==0) { parseStr(yytext); return COMMA; }
    else if(strcmp(yytext, "(")==0) { parseStr(yytext); return OPENP; }
    else if(strcmp(yytext, ")")==0) { parseStr(yytext); return CLOSEP; }
    else if(strcmp(yytext, "{")==0) { parseStr(yytext); return BIGOPENP; }
    else if(strcmp(yytext, "}")==0) { parseStr(yytext); return BIGCLOSEP; }
 }

{identifier} {
    if(strcmp(yytext, "else")==0) { parseStr(yytext); return ELSE; }
    else if(strcmp(yytext, "exit")==0) { parseStr(yytext); return EXIT; }
    else if(strcmp(yytext, "int")==0) {  parseStr(yytext); return INT; }
    else if(strcmp(yytext, "if")==0) { parseStr(yytext); return IF; }
    else if(strcmp(yytext, "read")==0) { parseStr(yytext); return READ; }
    else if(strcmp(yytext, "return")==0) { parseStr(yytext); return RETURN; }
    else if(strcmp(yytext, "while")==0) { parseStr(yytext); return WHILE; }
    else if(strcmp(yytext, "write")==0) { parseStr(yytext); return WRITE; }
    else { parseStr(yytext); return IDENTIFIER; }
}


.   { return yytext[0]; }
%%

void yyerror(const char *msg)
{
    fprintf(stderr,"Syntax error: line %d\n", yylineno);
}