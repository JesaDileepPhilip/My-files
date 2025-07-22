#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the count:\n";
    cin >> n;

    for (int i=1;i<=n;i=i+1)
    {
        for (int j=1;j<=i;j=j+1)
        {
            cout << i;
        }
        cout << "\n";
    }
}