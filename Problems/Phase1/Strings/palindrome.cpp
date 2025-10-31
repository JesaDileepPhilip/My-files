#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin,s);

    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }

    string rev="";
    for(int i=0;i<s.size();i++)
    {
        rev=rev+s[s.size()-i-1];
    }

    if(rev==s)
    {
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }
    return 0;
}