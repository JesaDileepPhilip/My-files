#include<bits/stdc++.h>
using namespace std;

class NumsArray 
{
    private:
        vector <int> prefix;
    public:
        NumsArray (vector <int> &nums)
        {
            prefix.resize(nums.size()+1,0);
            for(int i=0;i<nums.size();i++)
            {
                prefix[i+1]=prefix[i]+nums[i];
            }
        }

       int sumRange(int left, int right)
       {
        return prefix[right+1]-prefix[left];
       } 
};


int main()
{
    int n=0;
    cout << "Enter the number:\n";
    cin >> n;

    vector <int> nums(n);
    cout << "Enter the elements:\n";
    for(int i=0;i<nums.size();i++)
    {
        cin >> nums[i];
    }

    NumsArray obj(nums);

    int q=0;
    cout << "Enter the number of queries:\n";
    cin >> q;

    cout << "Enter the queries: left, right\n";
    while(q>0)
    {
        int left, right=0;
        cin >> left >> right;
        cout << "The sum is: " << obj.sumRange(left,right);
        q--;
    }
    return 0;
}