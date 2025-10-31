#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> leader;
        int n = nums.size();
        leader.push_back(nums[n - 1]); // Last element is always a leader

        for (int i = n - 2; i >= 0; i--) {
            int flag = 0;
            for (int j = n - 1; j > i; j--) {
                if (nums[i] <= nums[j]) {
                    flag = 1; // Not a leader
                    break;
                }
            }
            if (flag == 0) {
                leader.push_back(nums[i]);
            }
        }

        reverse(leader.begin(), leader.end()); // Optional: to maintain original order
        return leader;
    }
};

int main() {
    Solution sol;
    vector<int> nums;
    int n, val;

    // Input
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        nums.push_back(val);
    }

    // Get leaders
    vector<int> result = sol.leaders(nums);

    // Output
    cout << "Leaders in the array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
