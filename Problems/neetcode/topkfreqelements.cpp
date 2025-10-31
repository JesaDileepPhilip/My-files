#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count frequencies
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }

        vector<int> topKFrequent;

        // Step 2: Pick k most frequent elements
        while (k > 0) {
            int maxi = INT_MIN;
            int element = INT_MIN;

            // Find element with maximum frequency
            for (auto i : m) {
                if (maxi < i.second) {
                    maxi = i.second;
                    element = i.first;
                }
            }

            // Add to result
            topKFrequent.push_back(element);

            // Remove from map so it's not picked again
            m.erase(element);

            k--;
        }

        return topKFrequent;
    }
};

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k: ";
    cin >> k;

    Solution sol;
    vector<int> result = sol.topKFrequent(nums, k);

    cout << "Top " << k << " frequent elements are: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
