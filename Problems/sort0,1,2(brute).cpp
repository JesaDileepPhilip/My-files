#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        // Count the occurrences of 0s, 1s, and 2s
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count0++;
            } else if (nums[i] == 1) {
                count1++;
            } else { // nums[i] == 2
                count2++;
            }
        }

        // Overwrite nums based on counts
        for (int j = 0; j < count0; j++) {
            nums[j] = 0;
        }
        for (int j = count0; j < count0 + count1; j++) {
            nums[j] = 1;
        }
        for (int j = count0 + count1; j < nums.size(); j++) {
            nums[j] = 2;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    cout << "Before sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    sol.sortColors(nums);

    cout << "After sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
