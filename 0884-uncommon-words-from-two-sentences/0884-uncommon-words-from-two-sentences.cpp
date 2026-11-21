class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        string word;
        stringstream ss(s1 + " " + s2);

        while (ss >> word) {
            mp[word]++;
        }

        vector<string> ans;

        for (auto it : mp) {
            if (it.second == 1) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};