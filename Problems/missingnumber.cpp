#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expected_sum = n * (n + 1) / 2;
        int actual_sum = 0;

        for(int i = 0; i < n; i++) {
            actual_sum += nums[i];
        }

        int missing_no = expected_sum - actual_sum;
        return missing_no;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 0, 1};
    cout << "Missing Number: " << sol.missingNumber(nums) << endl;
    return 0;
}
