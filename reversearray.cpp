#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector <int> &nums)
{
    vector <int> rev(nums.size(),0);
    int j=0;
    for (int i = nums.size()-1; i >=0; i--) 
    {
        rev[j]=nums[i];
        j++;
    } 
    cout << "Reversed:\n";
    for (int i = 0; i < nums.size(); i++) 
    {
        cout << rev[i]<<"\n";
    }
}

int main()
{
    int n=0;
    cout << "Enter number: \n";
    cin >> n;
    cout << "Enter elements: \n";
    vector <int> nums(n,0);
    for (int i = 0; i < n; i++) 
    {
        cin >> nums[i];
    }
    reverseArray(nums);
}