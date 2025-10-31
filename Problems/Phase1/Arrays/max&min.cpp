#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter the size:";
    cin >> n;
    vector <int> nums(n,0);
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int maxi=nums[0];
    int mini=nums[0];
    for(int i=0;i<n;i++)
    {
        if(nums[i]>=maxi)
        {
            maxi=nums[i];
        }
        if(nums[i]<=mini)
        {
            mini=nums[i];
        }
    }
    cout << "\nMax element: \n" << maxi;
    cout << "\nMin element: \n" << mini;
}