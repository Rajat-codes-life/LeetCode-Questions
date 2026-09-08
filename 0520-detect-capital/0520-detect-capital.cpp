class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;

        // Count uppercase letters
        for (int i = 0; i < word.length(); i++) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                count++;
            }
        }

        // 3 valid cases
        if (count == 0) {
            return true;  // all lowercase
        }

        if (count == word.length()) {
            return true;  // all uppercase
        }

        if (count == 1 && word[0] >= 'A' && word[0] <= 'Z') {
            return true;  // only first letter uppercase
        }

        return false;
    }
};