#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int el = 0;
        // Boyer-Moore Voting: Candidate selection
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                count++;
                el = nums[i];
            }
            else if (nums[i] == el) {
                count++;
            }
            else {
                count--;
            }
        }
        // Verification step
        int count1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == el) {
                count1++;
            }
        }
        if (count1 > nums.size() / 2) {
            return el;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // Example test case
    int result = sol.majorityElement(nums);
    if (result != -1) {
        cout << "\nMajority Element: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }
    return 0;
}
