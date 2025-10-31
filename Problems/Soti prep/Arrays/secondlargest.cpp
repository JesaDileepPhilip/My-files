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
    int maxi=INT_MIN;
    int second=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(nums[i]>maxi)
        {
            second=maxi;
            maxi=nums[i];
        }
        else if(nums[i]<maxi && nums[i]>second)
        {
            second=nums[i];
        }
    } 
    cout << "The second largest is " << second <<"\n";
    return 0;
}