#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin,s);

    map<char,int> m;

    for(auto i:s)
    {
        m[i]++;
    }

    for(auto p:s)
    {
        if(m[p]==1)
        {
            cout << "The 1st non repeating character is " << p << "\n";
            break;
        }
    }

    return 0;
}
