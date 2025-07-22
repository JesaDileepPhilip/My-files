#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp; // num -> index mapping
        for (int i = 0; i < nums.size(); i++) {
            int x = target - nums[i]; // complement needed
            if (mpp.find(x) != mpp.end()) {
                // complement found earlier, return indices
                return {mpp[x], i};
            }
            // store current number with its index
            mpp[nums[i]] = i;
        }
        return {}; // should never reach here if exactly one solution exists
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    
    cout << "\nIndices: \n";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;
    return 0;
}
