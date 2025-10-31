#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> leader;
        int n = nums.size();
        int maxi = INT_MIN;

        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] > maxi) {
                leader.push_back(nums[i]);
                maxi = nums[i];
            }
        }

        // Reverse to maintain original order
        reverse(leader.begin(), leader.end());
        return leader;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {16, 17, 4, 3, 5, 2};

    vector<int> result = sol.leaders(nums);

    cout << "Leader elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
