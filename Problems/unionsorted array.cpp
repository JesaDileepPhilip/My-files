#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
       int i = 0;
       int j = 0;
       vector<int> result;

       while(i < nums1.size() && j < nums2.size()) {
           if(nums1[i] <= nums2[j]) {
               if(result.size() == 0 || result.back() != nums1[i]) {
                   result.push_back(nums1[i]);
               }
               i++;
           } else {
               if(result.size() == 0 || result.back() != nums2[j]) {
                   result.push_back(nums2[j]);
               }
               j++;
           }
       }

       while(i < nums1.size()) {
           if(result.size() == 0 || result.back() != nums1[i]) {
               result.push_back(nums1[i]);
           }
           i++;
       }

       while(j < nums2.size()) {
           if(result.size() == 0 || result.back() != nums2[j]) {
               result.push_back(nums2[j]);
           }
           j++;
       }

       return result;
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {1, 2, 2, 3, 4};
    vector<int> nums2 = {2, 3, 4, 4, 5, 6};

    vector<int> result = s.unionArray(nums1, nums2);

    cout << "Union of the arrays: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
