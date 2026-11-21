class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int, greater<int>> s;

        for (int num : nums) {
            s.insert(num);
        }

        if (s.size() < 3) {
            return *s.begin();
        }

        auto it = s.begin();
        advance(it, 2);

        return *it;
    }
};