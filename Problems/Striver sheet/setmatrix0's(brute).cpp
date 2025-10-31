#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // mark entire row with -1 (except zeroes)
    void markRow(vector<vector<int>>& matrix, int i, int n) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != 0) {
                matrix[i][j] = -1;
            }
        }
    }

    // mark entire column with -1 (except zeroes)
    void markColumn(vector<vector<int>>& matrix, int j, int m) {
        for (int i = 0; i < m; i++) {
            if (matrix[i][j] != 0) {
                matrix[i][j] = -1;
            }
        }
    }

    // main function
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();       // number of rows
        int n = matrix[0].size();    // number of cols

        // 1st pass: mark rows and columns
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    markRow(matrix, i, n);
                    markColumn(matrix, j, m);
                }
            }
        }

        // 2nd pass: convert -1 → 0
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == -1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

// Example usage
int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    cout << "Original matrix:\n";
    for (auto& row : matrix) {
        for (int val : row) cout << val << " ";
        cout << "\n";
    }

    sol.setZeroes(matrix);

    cout << "\nMatrix after setZeroes:\n";
    for (auto& row : matrix) {
        for (int val : row) cout << val << " ";
        cout << "\n";
    }

    return 0;
}
