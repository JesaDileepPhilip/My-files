#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> result;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                result.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {1, 2, 2, 3, 4};
    vector<int> nums2 = {2, 2, 3, 3, 4, 5};

    vector<int> result = s.intersection(nums1, nums2);

    cout << "Intersection with duplicates: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
