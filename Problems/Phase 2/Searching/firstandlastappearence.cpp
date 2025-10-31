#include<bits/stdc++.h>
using namespace std;

vector <int> firstAndLastApperance(vector <int> &nums, int k)
{
   int left=0;
   vector <int> result;
   while(left<nums.size())
   {
    if(k==nums[left])
    {
        result.push_back(left);
    }
    else
    {
        result.push_back(-1);
    }
    left++;
   }
   return result;
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
    cout << "Enter the target:\n";
    cin >> k;
    vector <int> result=firstAndLastApperance(nums,k);
    cout << "The target first occurs at index " << result[0] << " and last occurs at index " << result[result.size()-1] << "\n";
    return 0;
}