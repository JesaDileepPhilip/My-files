#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> allPermutations;

    // Generate all permutations recursively
    void generatePermutation(vector<int>& nums, int index) {
        if (index == nums.size()) {
            allPermutations.push_back(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++) {
            swap(nums[i], nums[index]);
            generatePermutation(nums, index + 1);
            swap(nums[i], nums[index]);  // backtrack
        }
    }

    vector<int> nextPermutation(vector<int>& nums) {
        allPermutations.clear();

        // Sort nums to ensure permutations are generated in lexicographic order
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());

        generatePermutation(temp, 0);  // Generate all permutations from sorted order

        for (int i = 0; i < allPermutations.size(); i++) {
            if (allPermutations[i] == nums) {
                // Return the next permutation if available
                if (i + 1 < allPermutations.size()) {
                    return allPermutations[i + 1];
                } else {
                    // If current is the last permutation, return the first
                    return allPermutations[0];
                }
            }
        }

        // Fallback (should never reach here)
        return nums;
    }
};

int main() {
    vector<int> nums = {1, 2, 3};  // 🔁 Change input here
    Solution sol;

    vector<int> result = sol.nextPermutation(nums);

    cout << "Next Permutation: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
