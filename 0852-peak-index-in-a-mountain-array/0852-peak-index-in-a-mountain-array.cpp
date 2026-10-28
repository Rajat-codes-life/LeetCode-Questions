
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // Uphill: next element is bigger
            if (arr[mid] < arr[mid + 1]) {
                left = mid + 1;
            }
            // Downhill or peak: peak is at mid or left
            else {
                right = mid;
            }
        }

        // Peak ka index return karo
        return left;
    }
};
