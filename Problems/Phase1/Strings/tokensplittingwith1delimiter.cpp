#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin,s);

    stringstream ss (s);
    string token;

    while(getline(ss,token,','))
    {
        cout << token << "\n";
    }

    return 0;
}
