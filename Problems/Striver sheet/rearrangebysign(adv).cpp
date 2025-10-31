#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;

        // Separate positive and negative numbers
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                pos.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }

        vector<int> result;
        int i = 0, j = 0;

        // Interleave positive and negative values
        while (i < pos.size() && j < neg.size()) {
            result.push_back(pos[i++]);
            result.push_back(neg[j++]);
        }

        // Append remaining elements, if any
        while (i < pos.size()) {
            result.push_back(pos[i++]);
        }

        while (j < neg.size()) {
            result.push_back(neg[j++]);
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> rearranged = sol.rearrangeArray(nums);

    cout << "Rearranged Array: ";
    for (int num : rearranged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
