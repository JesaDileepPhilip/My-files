#include<bits/stdc++.h>
using namespace std;

vector <int> evenAndOdd(vector <int> &nums)
{
    int evenCount=0;
    int oddCount=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]%2==0)
        {
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    vector <int> result;
    result.push_back(evenCount);
    result.push_back(oddCount);
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
    vector <int> result = evenAndOdd(nums);
    cout << "The even count is: " << result[0] << " and odd count is " << result[1] << "\n";
    return 0;
}