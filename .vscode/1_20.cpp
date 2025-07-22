#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the count:\n";
    cin >> n;

    for(int i=0;i<=n;i++)
    {
        for(char ch='A'+n-i;ch<='A'+n;ch++)
        {
            cout << ch << " ";
        }
        cout << "\n";
    }
}
