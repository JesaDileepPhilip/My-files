//longest subarray of 1 with atmost k zeros
//max cosecutive 1's with k numbers of zeros to flip to 1

#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnesWithKZeros(vector <int> &nums, int k)
{
    int left=0;
    int right=0;
    int maxi=0;
    int zeros=0;

    while(right<nums.size())
    {
        if(nums[right]==0)
        {
            zeros++;
        }
        while(zeros>k)
        {
            if(nums[left]==0)
            {
                zeros--;
            }
            left++;
        }
        maxi=max(maxi, right-left+1);
        right++;
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
    cout << "Enter the number of zeros:\n";
    cin >> k;
    int number=maxConsecutiveOnesWithKZeros(nums,k);
    cout << "The max consecutive ones after flipping zeros = " << number << "\n";
    return 0;
}