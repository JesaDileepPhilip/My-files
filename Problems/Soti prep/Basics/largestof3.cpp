#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0, m=0, o=0;
    cout << "\nEnter the numbers: ";
    cin >> n >> m >> o;
    if(n>=m&&n>=o)
    {
        cout << "The largest is " << n;
    }
    else if(m>=n&&m>=o)
    {
        cout << "The largest is " << m;
    }
    else
    {
        cout << "The largest is " << o;
    }
}