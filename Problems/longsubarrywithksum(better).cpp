#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        unordered_map<long long, int> prefixSumMap;
        long long sum = 0;
        int maxLength = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (sum == k) {
                maxLength = i + 1;
            }

            if (prefixSumMap.find(sum - k) != prefixSumMap.end()) {
                maxLength = max(maxLength, i - prefixSumMap[sum - k]);
            }

            if (prefixSumMap.find(sum) == prefixSumMap.end()) {
                prefixSumMap[sum] = i;
            }
        }

        return maxLength;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, -1, 1, 1, 1, -2, 3};
    int k = 4;
    cout << "Longest subarray length with sum " << k << " is: " << sol.longestSubarray(nums, k) << endl;
    return 0;
}
