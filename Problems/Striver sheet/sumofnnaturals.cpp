#include<bits/stdc++.h>
using namespace std;

void sumNaturals(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout << "The sume is: " << "\n" << sum;
}

int main()
{
    int n=0;
    cout << "\nEnter input: \n";
    cin >> n;
    sumNaturals(n);
}