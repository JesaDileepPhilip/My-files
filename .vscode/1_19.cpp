#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the count:\n";
    cin >> n;

    for(int i=0;i<=n;i++)
    {
        for(int j=n-i-1;j>=0;j--)
        {
            cout << " ";
        }
        for(char ch='A';ch<'A'+i;ch++)
        {
            cout << ch;
        }
        for(char ch='A'+i-2;ch>='A';ch--)
        {
            cout << ch;
        }
        cout << "\n";
    }
}
