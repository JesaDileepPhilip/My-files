#include<bits/stdc++.h>
using namespace std;

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
    int left=1;
    int maxi=nums[0];
    int mini=nums[0];
    while(left<n)
    {
        if(nums[left]>maxi)
        {
            maxi=nums[left];
        }
        if(nums[left]<mini)
        {
            mini=nums[left];
        }
        left++;
    }
    cout << "The max element: " << maxi << " and the min element: " << mini <<"\n";
    return 0;
}