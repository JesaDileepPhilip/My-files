#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithoutRepetition (string s)
{
    vector <int> hash(256,0);

    int left=0;
    int right=0;
    int maxi=0;

    while(right<s.size())
    {
        if(hash[s[right]]>=left)
        {
            left=hash[s[right]]+1;
        }
        hash[s[right]]=right;
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
    int result=longestSubarrayWithoutRepetition(s);
    cout << "The longest substring without repetition = " << result << "\n";
    return 0;
}