#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // circular allocation

        vector<int> temp(k);

        // Step 1: Save first k elements
        for(int i = 0; i < k; i++) {
            temp[i] = nums[i];
        }

        // Step 2: Shift remaining n-k elements to the left by k
        for(int i = k; i < n; i++) {
            nums[i - k] = nums[i];
        }

        // Step 3: Place saved k elements at the end
        for(int i = 0; i < k; i++) {
            nums[n - k + i] = temp[i];
        }

        return nums;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    for(int x : nums) cout << x << " ";
    cout << endl;

    vector<int> rotated = s.rotate(nums, k);

    cout << "Array after left rotating by " << k << " places: ";
    for(int x : rotated) cout << x << " ";
    cout << endl;

    return 0;
}
