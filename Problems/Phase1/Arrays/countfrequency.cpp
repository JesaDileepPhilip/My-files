#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    cout << "Enter the number:\n";
    cin >> n;
    vector <int> nums(n,0);
    cout << "Enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }

    map <int, int> m;
    for(auto i:nums)
    {
        m[i]++;
    }
    for(auto p:m)
    {
        cout << p.first << "->" << p.second << "\n";
    }
    return 0;
}