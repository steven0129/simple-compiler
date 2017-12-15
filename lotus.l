%{
#include <stdio.h>
#include "lotus.tab.h"
extern YYSTYPE yylval;
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


.   /* do nothing */
%%

void yyerror(const char *msg)
{
    fprintf(stderr,"Syntax error: line %d\n", yylineno);
}