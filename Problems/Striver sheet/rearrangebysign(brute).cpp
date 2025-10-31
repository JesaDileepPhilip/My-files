#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // Arrays to hold positive and negative numbers
        vector<int> nums1(nums.size() / 2, 0); // Positive numbers
        vector<int> nums2(nums.size() / 2, 0); // Negative numbers
        int j = 0, k = 0;

        // Separate positive and negative numbers
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) {
                nums1[j++] = nums[i];
            } else {
                nums2[k++] = nums[i];
            }
        }

        // Rearrange nums with alternate positive and negative
        for (int i = 0; i < nums.size() / 2; i++) {
            nums[2 * i] = nums1[i];      // Even indices: positive
            nums[2 * i + 1] = nums2[i];  // Odd indices: negative
        }

        return nums;
    }
};

// Driver code for testing
int main() {
    Solution sol;
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = sol.rearrangeArray(nums);

    // Output the result
    cout << "Rearranged array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
