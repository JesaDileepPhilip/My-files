#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m;

        // Count frequencies
        for(int i=0; i<nums.size(); i++) {
            m[nums[i]]++;
        }

        // Check if any element occurs more than once
        for(int i=0; i<nums.size(); i++) {
            if(m[nums[i]] > 1) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    bool result = sol.hasDuplicate(nums);

    if(result) {
        cout << "Duplicates found!" << endl;
    } else {
        cout << "No duplicates found!" << endl;
    }

    return 0;
}
