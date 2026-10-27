
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Target mil gaya
            if (nums[mid] == target) {
                return mid;
            }

            // Check if left half is sorted
            if (nums[left] <= nums[mid]) {

                // Target left half ke andar hai?
                if (nums[left] <= target &&
                    target < nums[mid]) {
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }

            // Otherwise, right half is sorted
            else {

                // Target right half ke andar hai?
                if (nums[mid] < target &&
                    target <= nums[right]) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
        }

        // Target nahi mila
        return -1;
    }
};
