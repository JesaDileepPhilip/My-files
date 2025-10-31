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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+nums[i];
    }
    cout << "The sum: " << sum << "\n";
    return 0;
}