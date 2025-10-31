//different types of fruits available; type1, tye2 3etc..
//2 baskets present, each can hold only a single type of fruit, in short bothe basekt will have in total 2 type of fruits
//maximum number of fruits that can be collectd 

//max subarray with atmost k types of numbers

#include<bits/stdc++.h>
using namespace std;

int maxFruitsCollected(vector <int> &nums, int k)
{
    int left=0;
    int right=0;
    int maxi=0;

    map <int,int> m;

    while(right<nums.size())
    {
        m[nums[right]]++;

        while(m.size()>k)
        {
            m[nums[left]]--;
            if(m[nums[left]]==0)
            {
                m.erase(nums[left]);
            }
            left++;
        }
        maxi=max(maxi, right-left+1);
        right++;
    }
    return maxi;
}

int main()
{
    int n=0;
    cout << "Enter total fruits:\n";
    cin >> n;
    vector <int> nums(n,0);
    cout << "Enter the elements:\n";
    for(int i=0;i<nums.size();i++)
    {
        cin >> nums[i];
    }
    int k=0;
    cout << "Enter the number of baskets:\n";
    cin >> k;
    int number=maxFruitsCollected(nums,k);
    cout << "The max fruits collected is = " << number << "\n";
    return 0;
}