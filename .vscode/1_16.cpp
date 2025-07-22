#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the count:\n";
    cin >> n;

    int x=1;
    for (int i=0;i<=n;i=i+1)
    {
        for (int j=0;j<i;j=j+1)
        {
            cout << x <<" ";
            x=x+1;
        }
        cout << "\n";
    }
}
