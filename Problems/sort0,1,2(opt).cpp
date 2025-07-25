#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1; // corrected from your version

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
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
