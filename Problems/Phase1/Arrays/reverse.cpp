#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    cout << "\nEnter size\n";
    cin >> n;
    vector <int> nums(n,0);
    vector <int> temp(n,0);
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int j=0;
    for(int i=n-1;i>=0;i--)
    {
        temp[j]=nums[i];
        j++;
    }
    cout << "The reversed array is:\n";
    for(int i=0;i<n;i++)
    {
        cout << temp[i] << "\n";
    }
}