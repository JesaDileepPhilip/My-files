#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        int n = nums.size();
        int maxLength = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                if (sum == k) {
                    maxLength = max(maxLength, j - i + 1);
                }
            }
        }

        return maxLength;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 1, 0, 1, 1, 0};
    int k = 4;
    cout << "\nLongest subarray length with sum " << k << " is: " << sol.longestSubarray(nums, k) << endl;
    return 0;
}
