#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }

        int longest = 1;
        unordered_set<int> st;

        // Insert all elements into the unordered set
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        // Iterate through each number in the set
        for (auto it : st) {
            // Check if it is the start of a sequence
            if (st.find(it - 1) == st.end()) {
                int x = it;
                int count = 1;

                // Count consecutive numbers
                while (st.find(x + 1) != st.end()) {
                    x = x + 1;
                    count = count + 1;
                }

                // Update the longest length found
                longest = max(longest, count);
            }
        }

        return longest;
    }
};

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    Solution obj;
    int ans = obj.longestConsecutive(nums);

    cout << "Longest Consecutive Sequence Length: " << ans << endl;
    return 0;
}
