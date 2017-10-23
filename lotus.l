%{

%}
%x comment
%option noyywrap

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
. /*do nothing*/;
%%

main() {
    yylex();
}
