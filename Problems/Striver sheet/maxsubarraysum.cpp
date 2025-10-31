#include <iostream>
#include <vector>
#include <climits> // for INT_MIN
using namespace std;

class Solution {
public:
    pair<int, vector<int>> maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;
        int start = 0;
        int resultStart = 0;
        int resultEnd = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (sum == 0) {
                start = i;
            }

            sum += nums[i];

            if (sum > maxi) {
                maxi = sum;
                resultStart = start;
                resultEnd = i;
            }

            if (sum < 0) {
                sum = 0;
            }
        }

        vector<int> result;
        for (int i = resultStart; i <= resultEnd; i++) {
            result.push_back(nums[i]);
        }

        return {maxi, result};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    pair<int, vector<int>> output = sol.maxSubArray(nums);
    int maxSum = output.first;
    vector<int> subarray = output.second;

    cout << "Maximum Subarray Sum: " << maxSum << endl;
    cout << "Subarray: ";
    for (int num : subarray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
