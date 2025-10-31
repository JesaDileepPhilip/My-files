#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) 
            return 0;

        int i = 0;
        for(int j = 1; j < nums.size(); j++) { // start j from 1
            if(nums[i] != nums[j]) {
                nums[i + 1] = nums[j];
                i++;
            }
        }
        return i + 1;
    }
};

int main() {
    Solution s;
    
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4}; // example input
    int k = s.removeDuplicates(nums);

    cout << "Unique count: " << k << endl;
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
