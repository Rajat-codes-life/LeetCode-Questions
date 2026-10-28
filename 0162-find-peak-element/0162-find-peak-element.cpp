
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // Agar mid, uske right neighbour se bada hai
            if (nums[mid] > nums[mid + 1]) {
                right = mid;  // Peak left side mein hai
            }
            else {
                left = mid + 1; // Peak right side mein hai
            }
        }

        // left == right, peak ka index mil gaya
        return left;
    }
};
