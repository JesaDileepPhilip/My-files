#include<bits/stdc++.h>
using namespace std;

int substringWithAll3Char(string s, int k)
{
    int left=0;
    int right=0;
    int count=0;

    map <char,int> m;

    while(right<s.size())
    {
        m[s[right]]++;

        while(m.size()==k)
        {
            count=count+(s.size()-right);

            m[s[left]]--;
            if(m[s[left]]==0)
            {
                m.erase(s[left]);
            }
            left++;
        }
        right++;
    }
    return count;
}

int main()
{
    string s;
    cout << "Enter the string:\n";
    getline(cin, s);
    int k=0;
    cout << "Enter the distinct number of characters:\n";
    cin >> k;
    int result=substringWithAll3Char(s,k);
    cout << "The number of substring witth all 3 distinct char = " << result << "\n";
    return 0;
}