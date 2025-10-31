// for.l
/*
%{
#include"y.tab.h"
%}

%%
"for"                           {return FOR;}
[a-zA-Z_][a-zA-Z0-9_]*          {return ID;}
[0-9]+                          {return NUM;}
"++"                            {return INC;}
"--"                            {return DEC;}
"="                             {return ASSIGN;}
";"                             {return SEMI;}
"("                             {return LP;}
")"                             {return RP;}
"=="|"!="|"<="|">="|"<"|">"     {return RELOP;}
"+"|"-"|"*"|"/"                 {return OP;}
"{"                             {return LCB;}
"}"                             {return RCB;}
[ \t\n]                         { }
.                               { }
%%

int yywrap()
{
    return 1;
}
*/

// for.y
/*
%{
#include<stdio.h>
#include<stdlib.h>

int yylex(void);
int yyerror(char *s);
%}

%token FOR ID NUM INC DEC ASSIGN SEMI LP RP RELOP OP LCB RCB
%left RELOP
%left OP

%%
program stmt:
    stmt
    |program stmt
    ;

stmt:
    FOR LP optional_init SEMI optional_cond SEMI optional_incr RP
    {printf("Valid for lopp syntax\n");}
    ;

optional_init:
    ID ASSIGN expr
    |
    ;

optional_cond:
    expr RELOP expr 
    | expr
    ;

optional_incr:
    ID INC
    | ID DEC
    |ID ASSIGN expr
    |
    ;

expr:
    ID
    |NUM
    |expr OP expr
    ;

body:
    LCB stmt_list RCB
    | ID ASSIGN expr SEMI
    | LCB RCB
    ;

stmt_list:
    stmt
    |stmt_list stmt
    | ID ASSIGN expr SEMI
    ;
%%

int main()
{
    printf("Enter a for loop:\n");
    yyparse();
    return 0;
}

int yyerror(char *s)
{
    printf("Invalid syntax: %s", s);
    return 0;
}
*/