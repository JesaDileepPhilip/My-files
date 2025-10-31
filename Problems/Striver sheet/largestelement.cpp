#include <bits/stdc++.h>
using namespace std;

// Class should be defined outside main
class Solution {
public:
    int largestElement(vector<int> &nums) {
        int largest = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > largest) {
                largest = nums[i];
            }
        }
        return largest;
    }
};

int main() {
    Solution s; // create object of Solution

    vector<int> nums = {3, 3, 6, 1}; // example input
    int result = s.largestElement(nums); // call the function

    cout << "The largest element is: " << result << "\n";

    return 0;
}
