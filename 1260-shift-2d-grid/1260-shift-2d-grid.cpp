class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int m = grid.size();
        int n = grid[0].size();

        int total = m * n;

        k = k % total;

        vector<vector<int>> ans(m, vector<int>(n));

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                // Current position
                int oldPos = i * n + j;

                // New position after shifting
                int newPos = (oldPos + k) % total;

                // Convert 1D position back to 2D
                int newRow = newPos / n;
                int newCol = newPos % n;

                ans[newRow][newCol] = grid[i][j];
            }
        }

        return ans;
    }
};