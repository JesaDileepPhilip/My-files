#include<bits/stdc++.h>
using namespace std;

int countElementInSortedArray(vector <int> &nums, int k)
{
   int left=0;
   int count=0;
   while(left<nums.size())
   {
    if(k==nums[left])
    {
        count++;
    }
    left++;
   }
   return count;
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
    int result=countElementInSortedArray(nums,k);
    cout << "The count is " << result << "\n";
    return 0;
}