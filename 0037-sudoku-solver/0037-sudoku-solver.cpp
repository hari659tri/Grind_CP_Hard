class Solution {
public:
    bool issafe(int row, int col, char ch, vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            // Check row
            if (board[row][i] == ch) return false;

            // Check column
            if (board[i][col] == ch) return false;

            // Check 3x3 subgrid
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == ch) {
                return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board) {
        int n = board.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == '.') {
                    for (char val = '1'; val <= '9'; val++) {
                        if (issafe(i, j, val, board)) {
                            board[i][j] = val;  // Place value
                            if (solve(board)) {  // Recurse
                                return true;
                            }
                            board[i][j] = '.';  // Backtrack
                        }
                    }
                    return false;  // No valid number found, trigger backtracking
                }
            }
        }
        return true;  // Solved
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};