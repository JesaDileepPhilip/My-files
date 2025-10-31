/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice. */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;  // stores number → index

        for (int i = 0; i < nums.size(); i++) {
            int reminder = target - nums[i];

            // Check if complement is already stored
            if (m.find(reminder) != m.end()) {
                return {m[reminder] + 1, i + 1}; // 1-based indices
            }

            // Store the current number with its index
            m[nums[i]] = i;
        }

        // Return empty if no valid pair found
        return {};
    }
};

int main() {
    Solution obj;
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target value: ";
    cin >> target;

    vector<int> ans = obj.twoSum(nums, target);

    if (!ans.empty()) {
        cout << "Indices (1-based): [" << ans[0] << ", " << ans[1] << "]" << endl;
        cout << "Numbers are: " << nums[ans[0] - 1] << " and " << nums[ans[1] - 1] << endl;
    } else {
        cout << "No two numbers found that sum to the target." << endl;
    }

    return 0;
}