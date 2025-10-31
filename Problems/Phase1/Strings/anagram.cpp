#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cout << "Enter the 1st string:\n";
    getline(cin,s1);
    string s2;
    cout << "Enter the 2nd string:\n";
    getline(cin,s2);
    int flag=0;
    
    if(s1.size()!=s2.size())
    {
        cout << "Not anagram\n";
    }

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout << "Not anagram\n";
    }
    else{
        cout << "Anagram\n";
    }
    return 0;
}