#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int positive = 0;
        int negative = 1;
        vector<int> result(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                result[positive] = nums[i];
                positive += 2;
            } else {
                result[negative] = nums[i];
                negative += 2;
            }
        }
        return result;
    }
};

// Optional: Main function to test
int main() {
    Solution sol;
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = sol.rearrangeArray(nums);

    cout << "\nRearranged array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
