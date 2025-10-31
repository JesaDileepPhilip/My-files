#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin,s);

    int left=0;

    sort(s.begin(),s.end());

    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[left])
        {
            left++;
            s[left]=s[i];
        }
    }

    cout << "After removing duplicates:\n";
    for(int i=0;i<=left;i++)
    {
        cout << s[i];
    }
    cout << "\n";
    return 0;
}