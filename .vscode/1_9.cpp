#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the count:\n";
    cin >> n;
    
    for (int i=1;i<=n;i=i+1)
    {
        for (int j=1;j<=n-i+1;j=j+1)
        {
            cout << j;
        }
        cout << "\n";
    }
}