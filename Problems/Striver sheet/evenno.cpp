#include<bits/stdc++.h>
using namespace std;

void evenNumber(int n)
{
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            cout << i << "\n";
        }
    }
}

int main()
{
    int n=0;
    cout << "\nEnter input: \n";
    cin >> n;
    evenNumber(n);
}