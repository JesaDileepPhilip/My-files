#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    cout << "Enter the number:\n";
    cin >> n;
    int flag=0;
    if(n==1)
    {
        cout << "Neither prime nor composite\n";
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n!=i&&n%i==0)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        cout << "Prime\n";
    }
    else
    {
        cout << "Not Prime\n";
    }
    return 0;
}