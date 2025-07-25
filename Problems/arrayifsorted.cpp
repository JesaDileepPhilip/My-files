#include <iostream>
#include <vector>
using namespace std;

class Solution {	
public:
    bool isSorted(vector<int>& nums) {
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                return false; // Found a descending pair; not sorted
            }
        }
        return true; // No descending pairs found; sorted
    }
};

int main() {
    Solution s;

    // Example test cases
    vector<int> nums1 = {1, 2, 2, 4, 5};      // Sorted
    vector<int> nums2 = {5, 3, 4, 6, 7};      // Not sorted

    // Test Case 1
    if(s.isSorted(nums1)) {
        cout << "\nThe array {1, 2, 2, 4, 5} is sorted in ascending order.\n";
    } else {
        cout << "\nThe array {1, 2, 2, 4, 5} is NOT sorted in ascending order.\n";
    }

    // Test Case 2
    if(s.isSorted(nums2)) {
        cout << "\nThe array {5, 3, 4, 6, 7} is sorted in ascending order.\n";
    } else {
        cout << "\nThe array {5, 3, 4, 6, 7} is NOT sorted in ascending order.\n";
    }

    return 0;
}
