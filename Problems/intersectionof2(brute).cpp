#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> visited(nums2.size(), 0); // ensure zero initialization
        vector<int> result;
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j] && visited[j] == 0) {
                    result.push_back(nums1[i]);
                    visited[j] = 1;
                    break;
                }
                if(nums2[j] > nums1[i]) {
                    break;
                }
            }
        }
        return result;
    }
};

int main() {
    Solution s;

    // Example input (you can modify these for testing)
    vector<int> nums1 = {1, 2, 2, 3, 4};
    vector<int> nums2 = {2, 2, 3, 4, 5};

    // Sort if using your current approach safely
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    vector<int> result = s.intersection(nums1, nums2);

    cout << "Intersection: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
