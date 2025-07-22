#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; // pointer for the next position to place non-zero

        // Step 1: Move all non-zero elements to the front in order
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                nums[i] = nums[j];
                i++;
            }
        }

        // Step 2: Fill the remaining positions with zero
        for (int j = i; j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12}; // Example input

    cout << "Original array: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    s.moveZeroes(nums);

    cout << "Array after moving zeroes to the end: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
