//Write a program to find ε – closure of all states of any given NFA with ε transition.


#include<stdio.h>

int e_transition[20][20];
int visited[20];
int num_states;

void add_epsilon_transition(int from, int to)
{
    e_transition[from][to]=1;
}

void dfs(int state)
{
    for(int i=0;i<num_states;i++)
    {
        if(e_transition[state][i] && !visited[i])
        {
            visited[i]=1;
            dfs(i);
        }
    }
}

void find_epsilon_closure(int state)
{
    for(int i=0;i<num_states;i++)
    {
        visited[i]=0;
    }
    visited[state]=1;
    dfs(state);

    printf("Epsilon-Closure(%d): {", state);
    for(int i=0;i<num_states;i++)
    {
        if(visited[i])
        {
            printf("%d ", i);
        }
    }
    printf("}\n");
}

int main()
{
    int num_transitions;
    int from, to;
    char symbol;

    printf("Enter the number of states in NFA:\n");
    scanf("%d", &num_states);

    printf("Enter the number of transitions:\n");
    scanf("%d", &num_transitions);

    printf("Enter the transitions (from to symbol), use e for epsilon:\n");
    for(int i=0;i<num_transitions;i++)
    {
        scanf("%d %d %c", &from, &to, &symbol);
        if(symbol=='e')
        {
            add_epsilon_transition(from, to);
        }
    }

    printf("---Epsilon Closures---\n");
    for(int i=0;i<num_states;i++)
    {
        find_epsilon_closure(i);
    }
    return 0;
}