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
    for(int i=0;i<n;i++)
    {
        if(nums[i]>nums[i+1])
        {
            cout << "The array is not sorted.\n";
            break;
        }
    }
    sort(nums.begin(),nums.end());
    cout << "The sorted array is :\n";
    for(int i=0;i<n;i++)
    {
        cout << nums[i];
    }
    return 0;
}