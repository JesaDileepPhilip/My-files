//Write a program to convert NFA to DFA

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int nfa[20][20][20], dfa_transitions[20*20][20], visited[20*20];
char nfaStates[20], input_symbols[20], deadState;
int nStates, nSymbols, dfaCount=0;

typedef struct
{
    int included[20];
}StateSet;
StateSet dfaStates[20];

int isEqual(StateSet a, StateSet b)
{
    for(int i=0;i<nStates;i++)
    {
        if(a.included[i]!=b.included[i])
        {
            return 0;
        }
    }
    return 1;
}

int addDFAState(StateSet s)
{
    for(int i=0;i<dfaCount;i++)
    {
        if(isEqual(dfaStates[i], s))
        {
            return i;
        }
    }
    dfaStates[dfaCount]=s;
    return dfaCount++;
}

StateSet move(StateSet s, int symbolIndex)
{
    StateSet next={0};
    for(int i=0;i<nStates;i++)
    {
        if(s.included[i])
        {
            for(int j=0;j<nStates;j++)
            {
                if(nfa[i][symbolIndex][j])
                {
                    next.included[j]=1;
                }
            }
        }
    }
    return next;
}

void printStateSet (StateSet s)
{
    int empty=1;
    printf("{");
    for(int i=0;i<nStates;i++)
    {
        if(s.included[i])
        {
            printf(" %c", nfaStates[i]);
            empty=0;
        }
    }
    if(empty)
    {
        printf(" %c", deadState);
    }
    printf("}");
}

int main()
{
    printf("Enter the number of NFA state:\n");
    scanf("%d", &nStates);

    printf("Enter the states:\n");
    for(int i=0;i<nStates;i++)
    {
        scanf(" %c", &nfaStates[i]);
    }

    printf("Enter the number of input symbols:\n");
    scanf("%d", &nSymbols);

    printf("Enter the symbols:\n");
    for(int i=0;i<nSymbols;i++)
    {
        scanf(" %c", &input_symbols[i]);
    }

    deadState=toupper(nfaStates[nStates-1])+1;

    printf("Enter the NFA transitions ('-' if none):\n");
    for(int i=0;i<nStates;i++)
    {
        for(int j=0;j<nSymbols;j++)
        {
            char nextState[20];
            scanf("%s", nextState);
            if(strcmp(nextState,"-")!=0)
            {
                for(int k=0;nextState[k];k++)
                {
                    for(int x=0;x<nStates;x++)
                    {
                        if(nfaStates[x]==toupper(nextState[k]))
                        {
                            nfa[i][j][x]=1;
                        }
                    }
                }
            }
        }
    }

    StateSet start={0};
    start.included[0]=1;
    addDFAState(start);
    for(int i=0;i<dfaCount;i++)
    {
        if(visited[i])
        {
            continue;
        }
        visited[i]=1;
        for(int j=0;j<nSymbols;j++)
        {
            dfa_transitions[i][j]=addDFAState(move(dfaStates[i],j));
        }
    } 

    StateSet deadSet={0};
    int deadIndex=addDFAState(deadSet);
    for(int i=0;i<dfaCount;i++)
    {
        for(int j=0;j<nSymbols;j++)
        {
            int empty=1;
            for(int k=0;k<nStates;k++)
            {
                if(dfaStates[dfa_transitions[i][j]].included[k])
                {
                    empty=0;
                }
            }
            if(empty)
            {
                dfa_transitions[i][j]=deadIndex;
            }
        }
    }

    for(int i=0;i<nSymbols;i++)
    {
        printf(" %c\t", input_symbols[i]);
    }
    printf("\n");
    for(int i=0;i<dfaCount;i++)
    {
        printStateSet(dfaStates[i]);
        printf("\t");
        printf("\t");
        for(int j=0;j<nSymbols;j++)
        {
            printStateSet(dfaStates[dfa_transitions[i][j]]);
            printf("\t");
        }
        printf("\n");
    }

    return 0;
}