#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;      // current streak of 1s
        int max_count = 0;  // maximum streak found so far

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                if (count > max_count) {
                    max_count = count;
                }
            } else {
                count = 0; // reset on 0
            }
        }
        return max_count;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int result = sol.findMaxConsecutiveOnes(nums);

    cout << "\nMaximum consecutive 1s: \n" << result;

    return 0;
}
