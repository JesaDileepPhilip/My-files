#include<bits/stdc++.h>
using namespace std;

int maxSubarrayFromEnds(vector <int> nums, int k)
{
    int lsum=0;
    int rsum=0;
    int sum=0;
    int left=k-1;
    int right=nums.size()-1;
    for(int i=0;i<k;i++)
    {
        lsum=lsum+nums[i];
    }
    int maxi=lsum;
    for(int i=0;i<k;i++)
    {
        lsum=lsum-nums[left];
        left--;
        rsum=rsum+nums[right];
        right--;
        sum=lsum+rsum;

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
    cout << "Enter the limit:\n";
    cin >> k;
    int number=maxSubarrayFromEnds(nums,k);
    cout << "The max subarray from ends = " << number << "\n";
    return 0;
}