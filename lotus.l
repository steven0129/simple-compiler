%{

%}
%%
[\n\t ]+ /*do nothing*/;
else |
exit |
int |
if |
read |
return |
while |
write { printf("Keywork: %s\n", yytext); }
[0-9]+ { printf("Integer Constant: %s\n", yytext); }
%%

main() {
    yylex();
}