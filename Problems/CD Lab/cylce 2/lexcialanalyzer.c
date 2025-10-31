#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

#define MAX_LEN 100

const char *keywords[] = {"int","float","if","else","while","return"};
int n_keywords = 6;

bool isKeyword(const char *str)
{
    for(int i=0;i<n_keywords;i++)
    {
        if(strcmp(str, keywords[i]) == 0)
        {
            return true;
        }
    }
    return false;
}

void tokenize (char *code)
{
    int i=0;
    while(code[i]!='\0')
    {
        if(isspace(code[i]))
        {
            i++;
            continue;
        }

    if(isalpha(code[i]) || code[i] == '_')
    {
        int j=0;
        char buffer[MAX_LEN];
        while(isalnum(code[i]) || code[i] == '_')
        {
            buffer[j++] = code[i++];
        }
        buffer[j]='\0';
        if(isKeyword(buffer))
        {
            printf("Keyword:%s\n",buffer);
        }
        else
        {
            printf("Identifier:%s\n",buffer);
        }
        continue;
    }

    if(isdigit(code[i]))
    {
        int j=0;
        char buffer[MAX_LEN];
        while(isdigit(code[i]))
        {
            buffer[j++] = code[i++];
        }
        buffer[j]='\0';
        printf("Number: %s\n",buffer);
        continue;
    }

    if(strchr("=<>", code[i]))
    {
        if((code[i] == '=' && code[i+1] == '=') || (code[i] == '<' && code[i+1] == '=') || (code[i] == '>' && code[i+1] == '='))
        {
            printf("Operator: %c%c\n", code[i], code[i+1]);
            i=i+2;
        }
        else
        {
            printf("Operator: %c\n", code[i]);
            i++;
        }
        continue;
    }

    if(strchr("+-*/", code[i]))
    {
        printf("Operator: %c\n", code[i]);
        i++;
        continue;
    }

    if(strchr(";,(){}", code[i]))
    {
        printf("Separator: %c\n", code[i]);
        i++;
        continue;   
    }

    printf("Unknown character: %c\n",code[i]);
    i++;
    }
}

int main()
{
    char code[100];
    printf("Enter the code(end with $ on newline):\n");

    char c;
    int idx=0;
    while((c = getchar()) != '$')
    {
        code[idx++] = c;
    }
    code[idx] = '\0';

    printf("Lexical analyysis coutput:\n");
    tokenize(code);
    return 0;
}