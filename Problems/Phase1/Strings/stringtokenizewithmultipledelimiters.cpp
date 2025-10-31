#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin,s);

    stringstream ss(s);
    string token="";
    string delimiters=",/|-.";

    for(auto c:s)
    {
        if(delimiters.find(c)!=string::npos)
        {
            if(!token.empty())
            {
                cout << token << "\n";
                token="";
            }
        }
        else{
            token=token+c;
        }
    }
    if(!token.empty())
    {
        cout << token << "\n";
    }

    return 0;
}
