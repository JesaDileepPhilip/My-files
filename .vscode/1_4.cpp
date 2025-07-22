#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of times:";
    cin >> n;
    for (int i=0;i<n;i=i+1)
    {
        cout << "* * * *\n";
    }

    cout << "\n";

    for(int i=0;i<n;i=i+1)
    {
        for(int i=0;i<n;i=i+1)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}

