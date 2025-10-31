//just like binary subarray with sum k

#include<bits/stdc++.h>
using namespace std;

int sum(vector <int> &nums, int k)
{
    int left=0;
    int right=0;
    int odd=0;
    int count=0;

    while(right<nums.size())
    {
        odd=odd+nums[right]%2;

        while(odd>k)
        {
            odd=odd-nums[left]%2;
            left++;
        }

        count=count+(right-left+1);
        right++;
    }
    return count;
}

int niceSubarray(vector <int> &nums, int k)
{
    return sum(nums,k)-sum(nums,k-1);
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
    cout << "Enter the goal:\n";
    cin >> k;
    int result=niceSubarray(nums,k);
    cout << "The number of nice subarrays = " << result << "\n";
    return 0;
}