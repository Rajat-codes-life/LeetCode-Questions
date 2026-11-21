class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> mp = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> ans;
        string current = "";

        function<void(int)> solve = [&](int index) {
            if (index == digits.size()) {
                ans.push_back(current);
                return;
            }

            string letters = mp[digits[index] - '0'];

            for (char ch : letters) {
                current.push_back(ch);
                solve(index + 1);
                current.pop_back();
            }
        };

        solve(0);
        return ans;
    }
};