class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        bool firstRow = false;
        bool firstCol = false;

        // Check first row
        for (int j = 0; j < m; j++) {
            if (matrix[0][j] == 0) {
                firstRow = true;
            }
        }

        // Check first column
        for (int i = 0; i < n; i++) {
            if (matrix[i][0] == 0) {
                firstCol = true;
            }
        }

        // Use first row and first column as markers
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {

                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set marked rows to zero
        for (int i = 1; i < n; i++) {

            if (matrix[i][0] == 0) {

                for (int j = 1; j < m; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Set marked columns to zero
        for (int j = 1; j < m; j++) {

            if (matrix[0][j] == 0) {

                for (int i = 1; i < n; i++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Finally handle first row
        if (firstRow) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        // Finally handle first column
        if (firstCol) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};