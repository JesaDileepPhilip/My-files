#include<bits/stdc++.h>
using namespace std;

int longestRepeatingCharReplacement(string s, int k)
{
    int left=0;
    int right=0;
    int maxi=0;
    int maxFreq=0;

    map <char,int> m;

    while(right<s.size())
    {
        m[s[right]]++;
        maxFreq=max(maxFreq,m[s[right]]);

        while((right-left+1)-maxFreq>k)
        {
            m[s[left]]--;
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
    cout << "Enter the number of characters to be replaced:\n";
    cin >> k;
    int result=longestRepeatingCharReplacement(s,k);
    cout << "The longest substring after replacement = " << result << "\n";
    return 0;
}