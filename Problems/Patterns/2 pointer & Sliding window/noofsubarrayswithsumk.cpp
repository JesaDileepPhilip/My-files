//only for non negative elements

#include<bits/stdc++.h>
using namespace std;


//better approcah
/*
     int sums(vector <int> &nums, int k)
    {
        int left=0;
        int right=0;
        int sum=0;
        int count=0;

        while(right<nums.size())
        {
            sum=sum+nums[right];

            while(sum>k)
            {
                sum=sum-nums[left];
                left++;
            }

            count=count+(right-left+1);
            right++;
        }
        return count;
    }

    int subarraysWithSumltk (vector <int> &nums, int k)
    {
        return sums(nums,k)-sums(nums,k-1);
    }
*/
int noOfSubarray(vector <int> nums, int k)
{
    int sum1=0;
    int sum2=0;
    int left=0;
    int right=0;
    int count1=0;
    int count2=0;
    while(right<nums.size())
    {
        sum1=sum1+nums[right];
        sum2=sum2+nums[right];;
        if(sum1>k)
        {
            sum1=sum1-nums[left];
            left++;
        }
        if(sum2>k-1)
        {
            sum2=sum2-nums[left];
            left++;
        }
        if(sum1<=k)
        {
            count1++;
        }
        if(sum2<=k-1)
        {
            count2++;
        }
        right++;
    }
    return count1-count2;
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
    int number=noOfSubarray(nums,k);
    cout << "The number of subarrays = " << number << "\n";
    return 0;
}