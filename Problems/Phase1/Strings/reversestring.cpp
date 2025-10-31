#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin,s);

    string rev="";
    for(int i=0;i<s.size();i++)
    {
        rev=rev+s[s.size()-i-1];
    }
    cout << "The reversed string is " << rev << "\n";
    return 0;
}