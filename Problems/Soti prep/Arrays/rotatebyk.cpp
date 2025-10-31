#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    cout << "\nEnter size:";
    cin >> n;
    vector <int> nums(n,0);
    vector <int> temp(n,0);
    cout << "\nEnter elements:";
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int k=0;
    cout << "Enter k to rotate:\n";
    cin >> k;
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.end()-k+1);
    reverse(nums.begin()+k,nums.end());
    cout << "The rotated array is: \n";
    for(int i=0;i<n;i++)
    {
        cout << nums[i];
    }
    return 0;
}