/* Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m; // number -> index (0-based stored)

        for (int i = 0; i < (int)nums.size(); ++i) {
            int reminder = target - nums[i];
            if (m.find(reminder) != m.end()) {
                // return 1-based indices: previous index, current index
                return { m[reminder] + 1, i + 1 };
            }
            m[nums[i]] = i;
        }

        return {}; // empty if no pair found
    }
};

int main() {

    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n)) return 0;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) cin >> nums[i];

    int target;
    cout << "Enter target value: ";
    cin >> target;

    vector<int> ans = sol.twoSum(nums, target);

    if (!ans.empty()) {
        cout << "Indices (1-based): [" << ans[0] << ", " << ans[1] << "]\n";
        cout << "Numbers: " << nums[ans[0] - 1] << " and " << nums[ans[1] - 1] << "\n";
    } else {
        cout << "No two numbers found that sum to target.\n";
    }

    return 0;
}