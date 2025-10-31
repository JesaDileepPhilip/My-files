//Write a program to convert NFA with ε transition to NFA without ε transition.

#include<stdio.h>
#include<string.h>

int num_states, num_symbols;
char symbols[10];

int transition[10][10][10];
int epsilon_transition[10][10];
int epsilon_closure[10][10];
int new_transition[10][10][10];

void compute_epsilon_closure()
{
    for(int state=0;state<num_states;state++)
    {
        int stack[10], top=0;
        int visited[10]={0};

        stack[top]=state;
        visited[state]=epsilon_closure[state][state]=1;

        while(top>=0)
        {
            int current=stack[top--];
            for(int next=0;next<num_states;next++)
            {
                if(epsilon_transition[current][next] && !visited[next])
                {
                    epsilon_closure[state][next]=visited[next]=1;
                    stack[++top]=next;
                }
            }
        }
    }
}

void remove_epsilon_transition()
{
    for(int state=0;state<num_states;state++)
    {
        for(int symbolIndex=0;symbolIndex<num_symbols;symbolIndex++)
        {
            for(int closureState=0;closureState<num_states;closureState++)
            {
                if(!epsilon_closure[state][closureState])
                {
                    continue;
                }
                for(int next=0;next<num_states;next++)
                {
                    if(!transition[closureState][symbolIndex][next])
                    {
                        continue;
                    }
                    for(int closureNext=0;closureNext<num_states;closureNext++)
                    {
                        if(epsilon_closure[next][closureNext])
                        {
                            new_transition[state][symbolIndex][closureNext]=1;
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    printf("Enter the number of states:\n");
    scanf("%d", &num_states);

    printf("Enter the number of symbols:\n");
    scanf("%d", &num_symbols);

    printf("Enter the symbols:\n");
    for(int i=0;i<num_symbols;i++)
    {
        scanf(" %c", &symbols[i]);
    }

    printf("Enter the transitions (from symbol to). Use -1 to stop:\n");
    while(1)
    {
        int from, to;
        char symbol;

        scanf("%d", &from);
        if(from==-1)
        {
            break;
        }

        scanf(" %c %d", &symbol, &to);
        if(symbol=='e')
        {
            epsilon_transition[from][to]=1;
        }
        else
        {
            int index=-1;
            for(int i=0;i<num_symbols;i++)
                {
                    if(symbols[i]==symbol)
                    {
                        index=i;
                        break;
                    }
                }
            if(index!=-1)
                    {
                        transition[from][index][to]=1;
                    }
        }
    }

    compute_epsilon_closure();
    remove_epsilon_transition();

    printf("NFA without epsilon:\n");
    for(int state=0;state<num_states;state++)
    {
        for(int symbolIndex=0;symbolIndex<num_symbols;symbolIndex++)
        {
            printf("Delta(%d, %c)={", state, symbols[symbolIndex]);
            for(int next=0;next<num_states;next++)
            {
                if(new_transition[state][symbolIndex][next])
                {
                    printf("%d ", next);
                }
            }
            printf("}\n");
        }
    }
    return 0;
}