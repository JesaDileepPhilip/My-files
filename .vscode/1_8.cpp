#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the count:\n";
    cin >> n;
    
    for (int i=0;i<n;i=i+1)
    {
        for (int j=n-i;j>0;j=j-1)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}