#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the count:\n";
    cin >> n;

    for(int i=0;i<n;i++)
    {
       if(i==0)
       {
        for(int j=0;j<n-1;j++)
        {
            cout << "*";
        }
       }
       else if(i==n-1)
       {
        for(int j=0;j<n-1;j++)
        {
            cout << "*";
        }
       } 
       else
       {
        cout << "*";
        for(int j=1;j<n-2;j++)
        {
           cout << " "; 
        }
        cout << "*";
       }
        cout << "\n";
    }
}
