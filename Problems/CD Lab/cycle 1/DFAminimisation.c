#include<stdio.h>
#include<stdbool.h>


int main()
{
    int nStates, nSymbols;
    int start;
    int final[20], nFinal;
    int transitionTable[20][20];
    bool isMarked[20][20]={false};
    int group[20];

    printf("Enter the number of states:\n");
    scanf("%d", &nStates);

    printf("Enter the number of symbols:\n");
    scanf("%d", &nSymbols);

    printf("Enter the start state:\n");
    scanf("%d", &start);

    printf("Enter the number of final states:\n");
    scanf("%d", &nFinal);

    printf("Enter the final states:\n");
    for(int i=0;i<nFinal;i++)
    {
        scanf("%d", &final[i]);
    }

    printf("Enter the transition table (state x symbol = next state):\n");
    for(int i=0;i<nStates;i++)
    {
        for(int j=0;j<nSymbols;j++)
        {
            scanf("%d",&transitionTable[i][j]);
        }
    }

    for(int i=0;i<nStates;i++)
    {
        for(int j=0;j<i;j++)
        {
            bool isFinalI=false, isFinalJ=false;
            for(int k=0;k<nFinal;k++)
            {
                if(final[k]==i)
                {
                    isFinalI=true;
                }
                if(final[k]==j)
                {
                    isFinalJ=true;
                }
            }
            if(isFinalI!=isFinalJ)
            {
                isMarked[i][j]=true;
            }
        }
    }

    bool hasChanged=true;
    while(hasChanged)
    {
        hasChanged=false;
        for(int i=0;i<nStates;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(isMarked[i][j])
                {
                    continue;
                }
                for(int symbol=0;symbol<nSymbols;symbol++)
                {
                    int nextStateI=transitionTable[i][symbol];
                    int nextStateJ=transitionTable[j][symbol];
                    if(nextStateI==nextStateJ)
                    {
                        continue;
                    }
                    if(nextStateI<nextStateJ)
                    {
                        int temp=nextStateI;
                        nextStateI=nextStateJ;
                        nextStateJ=temp;
                    }
                    if(isMarked[nextStateI][nextStateJ])
                    {
                        isMarked[i][j]=true;
                        hasChanged=true;
                        break;
                    }
                }
            }
        }
    }

    for(int i=0;i<nStates;i++)
    {
        group[i]=-1;
    }
    int totalGroups=0;
    for(int i=0;i<nStates;i++)
    {
        if(group[i]!=-1)
        {
            continue;
        }
        group[i]=totalGroups;
        for (int j = i + 1; j < nStates; j++) 
        {
            int a = i, b = j;
            if (a < b) { int t = a; a = b; b = t; }  // ensure upper triangle
            if (!isMarked[a][b]) {
                group[j] = totalGroups; // same group if unmarked
            }
        }
        totalGroups++;
    }

    int min_transitions[20][20];
    bool min_final[20]={false};
    int min_start=group[start];

    for(int i=0;i<nStates;i++)
    {
        if(group[i]==-1)
        {
            continue;
        }
        for(int symbol=0;symbol<nSymbols;symbol++)
        {
            int next=transitionTable[i][symbol];
            min_transitions[group[i]][symbol]=group[next];
        }
    }

    for(int i=0;i<nFinal;i++)
    {
        min_final[group[final[i]]]=true;
    }

    printf("Equivalent (unmarked) state pair:\n");
    for(int i=0;i<nStates;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(!isMarked[i][j])
            {
                printf("%d %d\n",i,j);
            }
        }
    }
    printf("Minimised DFA:");
    printf("\nNo. of states:%d", totalGroups);
    printf("\nStart state: %d", min_start);
    printf("\nFinal states:\n");
    for(int i=0;i<totalGroups;i++)
    {
        if(min_final[i])
        {
            printf("%d",i);
        }
    }
    printf("\n");

    printf("Transition Table:\n");
    for(int i=0;i<totalGroups;i++)
    {
        printf("State:%d\n",i);
        for(int symbol=0;symbol<nSymbols;symbol++)
        {
            printf("%d", min_transitions[i][symbol]);
        }
        printf("\n");
    }


    return 0;
}