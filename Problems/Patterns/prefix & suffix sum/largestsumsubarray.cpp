#include<bits/stdc++.h>
using namespace std;

//brutefroce
/*
int divideToEqualSum(vector <int> &nums)
{
    int left=0;
    int maxi=0;

    while(left<nums.size())
    {
        int sum=nums[left];
        int right=left+1;
        while(right<nums.size())
        {
            sum=sum+nums[right];
            maxi=max(maxi,sum);
            right++;
        }
        left++;
    }
    return maxi;
}
*/

int divideToEqualSum(vector <int> &nums)
{
    int prefix=0;
    int maxi=INT_MIN;

    for(int i=0;i<nums.size();i++)
    {
        prefix=prefix+nums[i];
        maxi=max(maxi,prefix);
        if(prefix<0)
        {
            prefix=0;
        }
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