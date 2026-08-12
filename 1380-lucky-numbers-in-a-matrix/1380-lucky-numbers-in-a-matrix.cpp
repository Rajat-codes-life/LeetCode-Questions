class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {

        vector<int> ans;

        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++)
        {
            // Find minimum in current row
            int rowMin = INT_MAX;

            for (int j = 0; j < n; j++)
            {
                rowMin = min(rowMin, matrix[i][j]);
            }

            // Check which element is row minimum
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == rowMin)
                {
                    // Find maximum in this column
                    int colMax = INT_MIN;

                    for (int k = 0; k < m; k++)
                    {
                        colMax = max(colMax, matrix[k][j]);
                    }

                    // Lucky number
                    if (matrix[i][j] == colMax)
                    {
                        ans.push_back(matrix[i][j]);
                    }
                }
            }
        }

        return ans;
    }
};