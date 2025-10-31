/*
%%writefile name_check.l
%{
#include<stdio.h>
%}

%%
.*Jesa.*    {}
.*          {printf("Valid string: %s\n", yytext);}
\n          {}
%%

int main()
{
    printf("Enter input string (Ctrl+D to stop):\n");
    yylex();
    return 0;
}

int yywrap()
{
    return 1;
}
*/