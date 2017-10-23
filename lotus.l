%{

%}
%x comment
%option noyywrap

delim [ \t\n\r]
letter [A-Za-z]
digit [0-9]
reversedWord "else"|"exit"|"int"|"if"|"read"|"return"|"while"|"write"
%%
"//" { BEGIN(comment); }
<comment>\n { BEGIN(INITIAL); }
<comment>. /*do nothing*/;

{delim}+ /*do nothing*/;
{reversedWord} { printf("Keywork: %s \n", yytext); }
{digit}+ { printf("Integer Constant: %s \n", yytext); }
(\+|\-|\*|\/|\%|\=\=|\!\=|\>\=|\>|\<\=|\<|\&\&|\|\||\!|\=|\;|\,|\(|\)|\{|\}) { printf("Operator: %s \n", yytext); }
. /*do nothing*/;
%%

main() {
    yylex();
}
