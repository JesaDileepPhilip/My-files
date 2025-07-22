#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the count:\n";
    cin >> n;
    
    for (int i=0;i<n;i=i+1)
    {
        for (int j=0;j<n-i-1;j=j+1)
        {
            cout << " ";
        }
        for (int j=0;j<2*i+1;j=j+1)
        {
            cout << "*";
        }
        cout << "\n";
    }
}