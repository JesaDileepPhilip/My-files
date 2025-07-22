#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Find the maximum element to size the hash array
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
        }

        // Initialize hash array of size (maxi + 1) with 0
        vector<int> hash(maxi + 1, 0);

        // Count the frequency of each element
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }

        // Find and return the element that occurs exactly once
        for (int i = 0; i < nums.size(); i++) {
            if (hash[nums[i]] == 1) {
                return nums[i];
            }
        }

        // If no element occurs once (should not happen in constraints)
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 1, 2, 1, 2}; // Example test case
    int result = sol.singleNumber(nums);
    cout << "The element that appears only once is: " << result << endl;
    return 0;
}
