#include<bits/stdc++.h>
using namespace std;

vector <int> reverseArray(vector <int> &nums)
{
    int left=0;
    int right=nums.size()-1;
    while(left<right)
    {
        swap(nums[left], nums[right]);
        left++;
        right--;
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
    vector <int> result = reverseArray(nums);
    cout << "The reverse is:\n";
    for(int i=0;i<n;i++)
    {
        cout << result[i];
    }
    return 0;
}