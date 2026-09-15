class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word, result;
        int count = 1;

        while (ss >> word) {
            char first = word[0];

            if (first == 'a' || first == 'e' || first == 'i' ||
                first == 'o' || first == 'u' ||
                first == 'A' || first == 'E' || first == 'I' ||
                first == 'O' || first == 'U') {
                
                // Vowel: just add "ma"
                word += "ma";
            } 
            else {
                // Consonant: move first letter to end, then add "ma"
                word = word.substr(1) + first + "ma";
            }

            // Add 'a' count times
            word += string(count, 'a');

            if (!result.empty())
                result += " ";

            result += word;
            count++;
        }

        return result;
    }
};