// calculator.l
/*
%{
#include"y.tab.h"
#include<stdlib.h>
extern int yylval;
%}

%%
[0-9]+      {yylval=atoi(yytext); return NUMBER;}
[+\-*/()]   {return yytext[0];}
\n          {return '\n';}
[ \t]        { }
.           { }
%%

int yywrap()
{
    return 1;
}
*/

// calculator.y
/*
%{
#include<stdio.h>
#include<stdlib.h>

int yylex(void);
int yyerror(char *s);
%}

%token NUMBER
%left '+' '-'
%left '*' '/'
%nonassoc UMINUS

%%
start:

| start expr '\n' {printf("=%d\n",$2); printf("Enter an expression:\n");}
;

expr:
NUMBER          {$$ = $1;}
| expr '+' expr {$$ = $1 + $3;}
| expr '-' expr {$$ = $1 - $3;}
| expr '*' expr {$$ = $1 * $3;}
| expr '/' expr {
    if($3 == 0)
    {
        yyerror("Division by Zero\n");
        $$ = 0;
    }
    else
    {
        $$ = $1 / $3;
    }
}
| '-' expr %prec UMINUS {$$ = -$2;}
| '(' expr ')' {$$ = $2;} 
;
%%

int main()
{
    printf("Enter an expression:\n");
    yyparse();
    return 0;
}

int yyerror(char *s)
{
    printf("%s\n",s);
    return 0;
}
*/

