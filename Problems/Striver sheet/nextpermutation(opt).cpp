#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> nextPermutation(vector<int>& nums) {
        int index = -1;
        int n = nums.size();

        // Step 1: Find the first decreasing element from the end
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        // Step 2: If no such index, the permutation is the last one
        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return nums;
        }

        // Step 3: Find the element just larger than nums[index] to the right
        for (int i = n - 1; i > index; i--) {
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Step 4: Reverse the suffix starting from index+1
        reverse(nums.begin() + index + 1, nums.end());

        return nums;
    }
};

int main() {
    vector<int> nums = {1, 2, 3};  // 🔁 You can change the input here
    Solution sol;
    
    vector<int> result = sol.nextPermutation(nums);

    cout << "Next Permutation: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
