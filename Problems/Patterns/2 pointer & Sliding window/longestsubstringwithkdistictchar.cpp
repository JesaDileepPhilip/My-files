#include<bits/stdc++.h>
using namespace std;

int longestSubstringWithKDistinctChar(string s, int k)
{
    int left=0;
    int right=0;
    int maxi=0;

    map <char,int> m;

    while(right<s.size())
    {
        m[s[right]]++;

        while(m.size()>k)
        {
            m[s[left]]--;
            if(m[s[left]]==0)
            {
                m.erase(s[left]);
            }
            left++;
        }

        maxi=max(maxi,right-left+1);
        right++;
    }
    return maxi;
}

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin, s);
    int k=0;
    cout << "Enter the distinct number of character possible:\n";
    cin >> k;
    int result=longestSubstringWithKDistinctChar(s,k);
    cout << "The longest substring with k distinct elements = " << result << "\n";
    return 0;
}