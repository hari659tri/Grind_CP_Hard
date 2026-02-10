class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<bool> zeroRows(rows, false);
        vector<bool> zeroCols(cols, false);

        // First pass: mark rows and columns that need to be zeroed
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (matrix[i][j] == 0) {
                    zeroRows[i] = true;
                    zeroCols[j] = true;
                }
            }
        }

        // Second pass: zero out marked rows
        for (int i = 0; i < rows; ++i) {
            if (zeroRows[i]) {
                for (int j = 0; j < cols; ++j) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Second pass: zero out marked columns
        for (int j = 0; j < cols; ++j) {
            if (zeroCols[j]) {
                for (int i = 0; i < rows; ++i) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
