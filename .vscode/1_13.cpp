#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the count:\n";
    cin >> n;
    
    for (int i=1;i<=n-1/2;i=i+1)
        {
            for (int j=1;j<=i;j=j+1)
                {
                    cout << "*";
                }
                cout << "\n";
            }
    for (int i=n-3/2;i>=1;i=i-1)
        {
            for (int j=1;j<=i;j=j+1)
                {
                    cout << "*";
                }
                cout << "\n";
            }
}
