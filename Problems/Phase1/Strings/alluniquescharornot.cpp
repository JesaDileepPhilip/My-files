#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin,s);

    map <char, int> m;

    int flag=0;

    for(auto i:s)
    {
        m[i]++;
    }

    for(auto p:m)
    {
        if(p.second!=1)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        cout << "Not all are unique\n";
    }
    else
    {
        cout << "All unique\n";
    }

    return 0;
}
