#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        } 

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for(int i=0; i<s.size(); i++) {
            if(s[i] != t[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    string s, t;

    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    bool result = sol.isAnagram(s, t);

    if(result) {
        cout << "The strings are anagrams!" << endl;
    } else {
        cout << "The strings are NOT anagrams!" << endl;
    }

    return 0;
}
