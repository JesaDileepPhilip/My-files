#include<bits/stdc++.h>
using namespace std;

int maxElement(vector <int> &nums, int n)
{
  int maxi=nums[0];
  for(int i=1;i<n;i++)
  {
    if(nums[i]>maxi)
    {
        maxi=nums[i];
    }
  }
  return maxi;
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
    int maxi=maxElement(nums, n);
    cout << maxi;
}