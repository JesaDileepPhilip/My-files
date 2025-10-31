#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

const char *keyword[]={"int","float","if","else","while","return"};
int n_keywords=6;

bool isKeyword(const char *str)
{
    for(int i=0;i<n_keywords;i++)
    {
        if(strcmp(keyword[i],str)==0)
        {
            return true;
        }
    }
    return false;
}

void tokensize(const char *code)
{
    int i=0;
    while(code[i]!='\0')
    {
        if(isspace(code[i]))
        {
            i++;
            continue;
        }
        if(isalpha(code[i]) || code[i]=="-")
        {
            int j=0;
            char buffer[100];
            while(isalnum(code[i]) || code[i]=="_")
            {
                buffer[j++]=code[i++];
            }
            buffer[j]='\0';
            if(isKeyword(buffer))
            {
                printf("\nKeyword: %s",buffer);
            }
            else
            {
                printf("\nIdentifier: %s",buffer);
            }
            i++;
        }
        if(isdigit(code[i]))
        {
            int j=0;
            char buffer[100];
            while(isdigit(code[i]))
            {
                buffer[j++]=code[i++];
            }
            buffer[j]='\0';
            printf("Numbers: %s",buffer);
            i++;
        }
    }
}

int main()
{
    char code[100];
    printf("Enter the code (end with $):\n");
    char c;
    int index=0;
    while((c=getchar())!=$)
    {
        code[index++]=c;
    }
    code[index]='\0';
    tokensize(code);
    return 0;
}
