
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {

            // Next element se compare karo.
            // Last element ke baad first element aayega.
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        // Maximum one decreasing point allowed
        return count <= 1;
    }
};
