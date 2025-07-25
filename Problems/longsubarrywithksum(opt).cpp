#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        int left = 0, right = 0;
        int sum = 0, maxlength = 0;

        while (right < nums.size()) {
            sum = sum + nums[right];

            while (left <= right && sum > k) {
                sum = sum - nums[left];
                left++;
            }

            if (sum == k) {
                maxlength = max(maxlength, right - left + 1);
            }

            right++;
        }

        return maxlength;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 1, 1, 1};
    int k = 3;
    cout << "Length of longest subarray with sum " << k << " is: " 
         << sol.longestSubarray(nums, k) << endl;
    return 0;
}
