#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the input:\n";
    cin >> n;
    for(int i=0;i<n;i=i+1)
    {
        for (int j=0;j<i;j=j+1)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

