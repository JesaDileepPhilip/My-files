#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector <int> &nums, int k)
{
    int left=0;
    int right=nums.size()-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(k==nums[mid])
        {
            return mid;
        }
        else if(k<nums[mid])
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n=0;
    cout << "Enter the number:\n";
    cin >> n;
    vector <int> nums(n,0);
    cout << "Enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int k=0;
    cout << "Enter the target:\n";
    cin >> k;
    int result=binarySearch(nums,k);
    cout << "The target is at " << result << "th index\n";
    return 0;
}