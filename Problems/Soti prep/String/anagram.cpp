#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    string str1="";
    cout << "\nEnter 1st string:";
    cin >> str1;
    string str2="";
    cout << "\nEnter 2nd string:";
    cin >> str2;
    int n1=str1.size();
    int n2=str2.size();
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2)
    {
        cout << "\nAnagram\n";
    }
    else
    {
        cout << "\nNot Anagram\n";
    }
    return 0;
}
