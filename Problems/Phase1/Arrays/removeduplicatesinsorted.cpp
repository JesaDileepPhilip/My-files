#include<bits/stdc++.h>
using namespace std;


void removeDuplicates(vector <int> &nums,int n)
{
    sort(nums.begin(),nums.end());

    int left=0;
    for(int i=1;i<n;i++)
    {
        if(nums[i]!=nums[left])
        {
            left++;
            nums[left]=nums[i];
        }
    }
    for(int i=0;i<left+1;i++)
    {
        cout << nums[i];
    }
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
    removeDuplicates(nums,n);
    return 0;
}