//lex variable.l

/*
%{
#include"y.tab.h"
%}

%%
[a-zA-Z][a-zA-Z0-9]*    {return IDENT;}
.|\n                    {return INVALID;}
%%

int yywrap()
{
    return 1;
}
*/

//yacc variable.y

/*
%{
#include<stdio.h>
#include<stdlib.h>

int yylex(void);
int yyerror(char *s);
extern char *yytext;
%}

%token IDENT INVALID

%%
start:IDENT     {printf("Valid\n");}
    | INVALID   {printf("Invalid\n");}
    ;
%%

int main()
{
    printf("Enter a variable to validate:\n");
    yyparse();
    return 0;
}

int yyerror(char *s)
{
    return 0;
}
*/