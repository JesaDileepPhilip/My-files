#include<bits/stdc++.h>
using namespace std;

string upperCase(string s1)
{
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]>='a'&&s1[i]<='z')
        {
            s1[i]=s1[i]-('a'-'A');
            //s1[i]=s1[i]-32;
        }
    }
    return s1;
}

int main()
{
    string s1;
    cout << "Enter the string: \n";
    getline(cin, s1);
    string s2 = upperCase(s1);
    cout << s2;
    return 0;
}