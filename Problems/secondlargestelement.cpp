#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    pair<int, int> secondLargestElement(vector<int>& nums) {
        int largest = nums[0];
        int second_largest = INT_MIN;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > largest) {
                second_largest = largest;
                largest = nums[i];
            }
            else if(nums[i] < largest && nums[i] > second_largest) {
                second_largest = nums[i];
            }
        }

        if(second_largest == INT_MIN) {
            // If no valid second largest (all elements equal)
            return {largest, -1};
        }
        return {largest, second_largest};
    }
};

int main() {
    Solution s;

    vector<int> nums = {3, 3, 6, 1};  // example input

    pair<int, int> result = s.secondLargestElement(nums);

    cout << "\nLargest: " << result.first << "\n";
    if(result.second == -1) {
        cout << "No valid second largest element exists." << "\n";
    } else {
        cout << "Second Largest: " << result.second << "\n";
    }

    return 0;
}
