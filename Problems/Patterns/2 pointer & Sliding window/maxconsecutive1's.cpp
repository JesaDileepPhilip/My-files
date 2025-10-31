#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector <int> nums)
{
    int left=0;
    int right=0;
    int count=0;
    int maxi=0;
     while(right<nums.size())
    {
        if(nums[right]==1)
        {
            count++;
        }
        else
        {
            count=0;
            left=right;
        }
        maxi=max(count,maxi);
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
    int number=maxConsecutiveOnes(nums);
    cout << "The max consecutive ones = " << number << "\n";
    return 0;
}