#include<bits/stdc++.h>
using namespace std;

int maxSum(vector <int> nums, int k)
{
    int sum=0;
    int left=0;
    int right=k-1;
    if(k>nums.size())
    {
        return 0;
    }
    for(int i=0;i<k;i++)
    {
        sum=sum+nums[i];
    }
    int maxi=sum;
    while(right+1<nums.size())
    {
        sum=sum-nums[left];
        left++;
        right++;
        sum=sum+nums[right];

        maxi=max(maxi,sum);
    }
    return maxi;
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
    cout << "Enter the size of subsequence:\n";
    cin >> k;
    int sum=maxSum(nums,k);
    cout << "Max sum is " << sum;
    return 0;
}