#include<bits/stdc++.h>
using namespace std;

int divideToEqualSum(vector <int> &nums)
{
    int prefix=nums[0];
    int maxi=INT_MIN;

    for(int i=1;i<nums.size();i++)
    {
        prefix=prefix-nums[i];
        maxi=max(maxi,prefix);
        prefix=nums[i];
    }
    return maxi;
}

int main()
{
    int n=0;
    cout << "Enter the total:\n";
    cin >> n;
    vector <int> nums(n,0);
    cout << "Enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int result=divideToEqualSum(nums);
    cout << "The largest sum subarray is: " << result << "\n";
    return 0;
}