#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR = 0;
        for(int i = 0; i < nums.size(); i++) {
            XOR = XOR ^ nums[i];
        }
        return XOR;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 3, 5, 4, 5, 3, 4};
    int result = sol.singleNumber(nums);
    cout << "\nThe single number (appearing once) is: " << result << endl;
    return 0;
}