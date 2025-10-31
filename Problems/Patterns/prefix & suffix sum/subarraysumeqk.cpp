#include<bits/stdc++.h>
using namespace std;

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

int equilibPoint(vector <int> &nums, int k)
{
    return sums(nums,k)-sums(nums,k-1);
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
    int k=0;
    cout << "Enter the limit:\n";
    cin >> k;
    int result=equilibPoint(nums,k);
    cout << "The equilibrium point is: " << result << "\n";
    return 0;
}