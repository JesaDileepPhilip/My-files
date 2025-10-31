#include<bits/stdc++.h>
using namespace std;

string minWindowSubstring(string s, string t)
{
    if(t.size()>s.size())
    {
        return "";
    }

    int left=0;
    int right=0;
    int minlen=INT_MAX;
    int count=0;
    int startIndex=-1;

    vector <int> hash(256,0);

    for(int i=0;i<t.size();i++)
    {
        hash[t[i]]++;
    }

    while(right<s.size())
    {
        hash[s[right]]--;
        if(hash[s[right]]>=0)
        {
            count++;
        }

        while(count==t.size())
        {
            if(right-left+1 <minlen)
            {
                minlen=right-left+1;
                startIndex=left;
            }

            hash[s[left]]++;
            if(hash[s[left]]>0)
            {
                count--;
            }
            left++;
        }
        right++;
    }
    return startIndex==-1 ? "" : s.substr(startIndex,minlen);
}

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin,s);
    string t;
    cout << "Enter the other string:\n";
    getline(cin,t);
    string result=minWindowSubstring(s,t);
    cout << "The minimum window subsrting = " << result << "\n";
    return 0;
}