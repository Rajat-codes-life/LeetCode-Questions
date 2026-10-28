
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // Mid right element se bada hai
            if (nums[mid] > nums[right]) {
                // Minimum right side mein hoga
                left = mid + 1;
            }
            else {
                // Minimum mid ya left side mein hai
                right = mid;
            }
        }

        // Left aur right same index par hain
        return nums[left];
    }
};
