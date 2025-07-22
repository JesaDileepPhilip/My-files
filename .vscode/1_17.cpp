#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the count:\n";
    cin >> n;

    for(int i=0;i<=n;i++)
    {
        for(char ch='A';ch<'A'+i;ch++)
        {
            cout << ch;
        }
        cout << "\n";
    }
}
