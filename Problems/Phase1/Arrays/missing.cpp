#include<bits/stdc++.h>
using namespace std;


int missing(vector <int> &nums,int n)
{
    for(int i=0;i<n;i++)
    {
        if(nums[i]+1!=nums[i+1])
        {
            return nums[i]+1;
        }
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
    int x=missing(nums,n);
    cout << "The missing number is: " << x << "\n";
    return 0;
}