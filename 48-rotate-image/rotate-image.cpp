class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
          int n = matrix.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                swap(matrix[i][j], matrix[n - 1 - j][n - 1 - i]);
            }
        }

        for (int i = 0; i < n / 2; i++) {
            swap(matrix[i], matrix[n - 1 - i]);
        }
    }
};