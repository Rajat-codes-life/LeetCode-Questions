class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (isBadVersion(mid)) {
                right = mid;       // First bad mid par ya usse pehle hai
            } else {
                left = mid + 1;    // First bad mid ke baad hai
            }
        }

        return left;
    }
};