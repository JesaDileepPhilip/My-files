#include<bits/stdc++.h>
using namespace std;

int sum(vector <int> &nums, int k)
{
    int left=0;
    int right=0;
    int maxi=0;

    map <int,int> m;

    while(right<nums.size())
    {
        m[nums[right]]++;

        while(m.size()>k)
        {
            m[nums[left]]--;
            if(m[nums[left]]==0)
            {
                m.erase(nums[left]);
            }
            left++;
        }
        maxi=maxi+(right-left+1);
        right++;
    }
    return maxi;
} 

int subarrayWithKDiffInt(vector <int> &nums, int k)
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
    int result=subarrayWithKDiffInt(nums,k);
    cout << "The number of subarrays with k different integers = " << result << "\n";
    return 0;
}