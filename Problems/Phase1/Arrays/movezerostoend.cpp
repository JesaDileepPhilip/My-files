#include<bits/stdc++.h>
using namespace std;


vector <int> moveZerosToEnd(vector <int> &nums,int n)
{
    int left=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]!=0)
        {
            nums[left]=nums[i];
            left++;
        }
    }
    while(left<n)
    {
        nums[left]=0;
        left++;
    }
    return nums;
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
    moveZerosToEnd(nums,n);
    cout << "The new array is:\n";
    for(int i=0;i<n;i++)
    {
        cout << nums[i];
    }
    return 0;
}