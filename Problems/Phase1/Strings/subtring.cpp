#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin,s);

    int left=0;
    while(left<s.size())
    {
        int right=left;
        string x="";
        while(right<s.size())
        {
            x=x+s[right];
            cout << x << "\n";
            right++;
        }
        left++;
    }
    return 0;
}