#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        for (auto it : mpp) {
            if (it.second > nums.size() / 2) {
                return it.first;
            }
        }
        return -1; // fallback, though LeetCode guarantees majority element exists
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int result = sol.majorityElement(nums);
    if (result != -1) {
        cout << "\nMajority Element: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }
    return 0;
}
