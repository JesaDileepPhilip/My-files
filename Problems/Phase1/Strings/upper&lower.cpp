#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin,s);

    string x="";
    for(int i=0;i<s.size();i++)
    {
        x=x+char(tolower(s[i]));
    }

    string y="";
    for(int i=0;i<s.size();i++)
    {
        y=y+char(toupper(s[i]));
    }
    
    cout << "The upper case is\n";  
    for(int i=0;i<s.size();i++)
    {
        cout << y[i];
    }

    cout << "\n";
    cout << "The lower case is \n"; 
    for(int i=0;i<s.size();i++)
    {
        cout << x[i];
    } 
    cout << "\n";
    return 0;
}
