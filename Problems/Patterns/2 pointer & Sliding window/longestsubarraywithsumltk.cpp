#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector <int> nums, int k)
{
    int sum=0;
    int left=0;
    int right=0;
    int maxLength=0;
    while(right+1<nums.size())
    {
        sum=sum+nums[right];
        if(sum>k)
        {
            sum=sum-nums[left];
            left++;
        }
        if(sum<=k)
        {
            maxLength=max(maxLength, right-left+1);
        }
        right++;
    }
    return maxLength;
}

int main()
{
    int n=0;
    cout << "Enter total:\n";
    cin >> n;
    vector <int> nums(n,0);
    cout << "Enter the elements:\n";
    for(int i=0;i<nums.size();i++)
    {
        cin >> nums[i];
    }
    int k=0;
    cout << "Enter the limit:\n";
    cin >> k;
    int maxLength=longestSubarray(nums,k);
    cout << "The max length of subarray with sum k = " << maxLength << "\n"; 
    return 0;
}