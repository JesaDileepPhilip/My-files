#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    s.rotate(nums, k);

    cout << "Array after right rotating by " << k << " places: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
