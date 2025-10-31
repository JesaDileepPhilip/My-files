#include<bits/stdc++.h>
using namespace std;

//better approach

/*
    int divideToEqualSum(vector <int> &nums)
{
    vector <int> prefix(nums.size(),0);
    prefix[0]=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        prefix[i]=prefix[i-1]+nums[i];
    }

    int total=prefix[nums.size()-1];
    int endIndex=-1;

    for(int i=0;i<nums.size();i++)
    {
        if(prefix[i]==total-prefix[i])
        {
            endIndex=i;
            break;
        }
    }
    return endIndex+1;
} 
*/
int divideToEqualSum(vector <int> &nums)
{
    vector <int> prefix(nums.size(),0);
    prefix[0]=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        prefix[i]=prefix[i-1]+nums[i];
    }

    vector <int> suffix(nums.size(),0);
    suffix[nums.size()-1]=nums[nums.size()-1];
    for(int i=nums.size()-2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]+nums[i];
    }

    int endIndex=-1;
    
    for(int i=0;i<nums.size();i++)
    {
        if(prefix[i]==suffix[i+1])
        {
            endIndex=i;
            break;
        }
    }
    return endIndex+1;
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
    int result=divideToEqualSum(nums);
    cout << "The equal sum arrays are: \n";
    cout << "Array 1: \n";
    for(int i=0;i<result;i++)
    {
        cout << nums[i] << "\n";
    }
    cout << "Array 2: \n";
    for(int i=result;i<nums.size();i++)
    {
        cout << nums[i] << "\n";
    }
    return 0;
}