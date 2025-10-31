#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        while(i < nums.size()) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
            i++;
        }
        return {}; // return empty vector if no pair found
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    
    if (!result.empty()) {
        cout << "\nIndices: \n" << result[0] << ", " << result[1];
    } else {
        cout << "\nNo pair found that sums to the target.\n";
    }

    return 0;
}
