#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0;
        int j = 0;
        vector<int> result;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                if (result.empty() || result.back() != nums1[i]) {
                    result.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};
    vector<int> result = sol.intersection(nums1, nums2);

    cout << "\nIntersection: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
