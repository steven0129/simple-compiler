%{

%}
%x comment
%option noyywrap

delim [ \t\n\r]
letter [A-Za-z]
digit [0-9]
%%
"//" { BEGIN(comment); }
<comment>\n { printf("comment: %s\n", yytext);BEGIN(INITIAL); }

{delim}+ /*do nothing*/;
(else|exit|int|if|read|return|while|write) { printf("Keywork: %s \n", yytext); }
{digit}+ { printf("Integer Constant: %s \n", yytext); }
(\+|\-|\*|\/|\%|\=\=|\!\=|\>\=|\>|\<\=|\<|\&\&|\|\||\!|\=|\;|\,|\(|\)|\{|\}) { printf("Operator: %s \n", yytext); }
. /*do nothing*/;
%%

main() {
    yylex();
}
