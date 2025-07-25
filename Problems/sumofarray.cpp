#include<bits/stdc++.h>
using namespace std;

int sumOfArray(vector <int> &nums)
{
  int sum=nums[0];
  for(int i=1;i<nums.size();i++)
  {
    sum=sum+nums[i];
  }
  return sum;
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
    int sum=sumOfArray(nums);
    cout << "Sum is: " << sum<<"\n";
}