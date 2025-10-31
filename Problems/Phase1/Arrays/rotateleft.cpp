#include<bits/stdc++.h>
using namespace std;


vector <int> rotateLeft(vector <int> &nums,int n,int k)
{
    vector <int> temp(n,0);
    for(int i=0;i<n;i++)
    {
        temp[i]=nums[(i+k)%n];
    }
    return temp;
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
    int k=0;
    cout << "Enter the limit to shift:\n";
    cin >> k;
    vector <int> temp=rotateLeft(nums,n,k);
    cout << "The new array is:\n";
    for(int i=0;i<n;i++)
    {
        cout << temp[i];
    }
    return 0;
}