%{

%}
%x comment
%option noyywrap

singleWord [A-Za-z_0-9]
token [A-Za-z_0-9][A-Za-z_0-9]+
delim [ \t\n\r]
digit [0-9]
reversedWord "else"|"exit"|"int"|"if"|"read"|"return"|"while"|"write"
%%
"//" { BEGIN(comment); }
<comment>\n { BEGIN(INITIAL); }
<comment>. /*do nothing*/;

{delim}+ /*do nothing*/;
{reversedWord} { printf("Keywork: %s\n", yytext); }
{digit}+ { printf("Integer Constant: %s\n", yytext); }
(\+|\-|\*|\/|\%|\=\=|\!\=|\>\=|\>|\<\=|\<|\&\&|\|\||\!|\=|\;|\,|\(|\)|\{|\}) { printf("Operator: %s \n", yytext); }
{token} { printf("Identifier: %s\n", yytext); }
{singleWord} { printf("Identifier: %s\n", yytext); }
. /*do nothing*/;
%%

main() {
    yylex();
}
