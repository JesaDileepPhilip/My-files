#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0;
        vector<int> twoSum;

        for (int i = 0; i < nums.size(); i++) {
            int right = 0;
            while (i != right && right < nums.size()) {
                sum = nums[i] + nums[right];
                if (sum == target) {
                    twoSum.push_back(right);
                    twoSum.push_back(i);
                    return twoSum; // return immediately after finding the first pair
                }
                right++;
            }
        }
        return twoSum; // if no pair is found
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = sol.twoSum(nums, target);

    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}
