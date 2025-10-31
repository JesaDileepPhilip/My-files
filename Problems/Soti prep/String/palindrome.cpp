#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="";
    cout << "\nEnter the string:";
    cin >> str;
    int n=str.size();
    int flag=0;
    for(int i=0;i<n;i++)
    {
        str[i]=tolower(str[i]);
        if(str[i]!=str[n-i-1])
        {
           flag=1; 
        }
    }
    if(flag==0)
    {
        cout << "\nPalindrome\n";
    }
    else
    {
        cout << "\nNot Palindrome\n";

    }
    return 0;
}