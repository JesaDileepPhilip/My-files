#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the count:\n";
    cin >> n;
    for (int i=1;i<=n;i=i+1)
    {
        int x=0;
        if(i%2==1)
        {
           x=0; 
        }
        else
        {
            x=1;
        }
        for(int j=1;j<=i;j=j+1)
        {
            if(j%2==0)
            {
                cout << x << "";
            }
            else
            {
                cout << 1 - x <<"";
            }
        }
        cout << "\n";
    }
}
