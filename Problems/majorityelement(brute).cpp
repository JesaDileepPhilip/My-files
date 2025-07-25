#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        while (i < n) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            if (count > n / 2) { // Check if it appears more than n/2 times
                return nums[i];
            }
            i++;
        }
        return -1; // In LeetCode, this line won't be reached since a majority element is guaranteed
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // Example test case
    cout << "Majority Element: " << sol.majorityElement(nums) << endl;
    return 0;
}
