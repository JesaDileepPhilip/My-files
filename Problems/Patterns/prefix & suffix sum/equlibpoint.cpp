#include<bits/stdc++.h>
using namespace std;

int equilibPoint(vector <int> &nums)
{
    vector <int> prefix(nums.size());
    prefix[0]=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        prefix[i]=prefix[i-1]+nums[i];
    }
    vector <int> suffix(nums.size());
    suffix[nums.size()-1]=nums[nums.size()-1];
    for(int i=nums.size()-2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]+nums[i];
    }
    for(int i=0;i<nums.size();i++)
    {
        if(prefix[i]==suffix[i])
        {
            return nums[i];
        }
    }
    return INT_MIN;
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
    int result=equilibPoint(nums);
    cout << "The equilibrium point is: " << result << "\n";
    return 0;
}