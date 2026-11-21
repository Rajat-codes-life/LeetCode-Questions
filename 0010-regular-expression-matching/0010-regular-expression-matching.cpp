class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();

        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));

        function<bool(int, int)> solve = [&](int i, int j) -> bool {
            if (j == n) {
                return i == m;
            }

            if (dp[i][j] != -1) {
                return dp[i][j];
            }

            bool match = (i < m && (s[i] == p[j] || p[j] == '.'));

            bool ans;

            if (j + 1 < n && p[j + 1] == '*') {
                ans = solve(i, j + 2) ||
                      (match && solve(i + 1, j));
            }
            else {
                ans = match && solve(i + 1, j + 1);
            }

            return dp[i][j] = ans;
        };

        return solve(0, 0);
    }
};