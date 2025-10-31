#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string like rwxr-xr--:\n";
    getline(cin,s);

    string result="";

    if(s.size()!=9)
    {
        cout << "Invalid input\n";
    }

    for(int i=0;i<9;i=i+3)
    {
        int sum=0;
        if(s[i]=='r')
        {
            sum=sum+4;
        }
        if(s[i+1]=='w')
        {
            sum=sum+2;
        }
        if(s[i+2]=='x')
        {
            sum=sum+1;
        }
        result=result+to_string(sum);
    }

    cout << "The octal value is " << result << "\n";
    return 0;
}