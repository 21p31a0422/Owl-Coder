class Solution {
public:
    bool myComp(char c1, char c2) {
        if ((c1 == 'a' && (c2 == 'a' || c2 == 'e')) ||
            (c1 == 'e' && (c2 == 'e' || c2 == 'i')) ||
            (c1 == 'i' && (c2 == 'i' || c2 == 'o')) ||
            (c1 == 'o' && (c2 == 'o' || c2 == 'u')) || 
            (c1 == 'u' && c2 == 'u'))
            return true;
        return false;
    }
    int longestBeautifulSubstring(string word) {
        if (word.size() < 5)
            return 0;
        int start = INT_MIN, end = 0, res = 0;
        while (end < word.size() - 1) {
            if (start == INT_MIN && word[end] == 'a' && myComp(word[end], word[end + 1])) {
                start = end;
                end++;
            } else if (myComp(word[end], word[end + 1]))
                end++;
            else if (start != INT_MIN && (end - 4) >= start && word[end] == 'u' &&
                       word[end + 1] != 'u') {
                res = max(res, end - start + 1);
                start = INT_MIN;
                end++;
            } 
            else {
                start = INT_MIN;
                end++;
            }
        }
        if (start == INT_MIN)
            return max(0, res);
        if (word[word.size() - 1] == 'u') return max(res, end - start + 1);
        return res;
    }
};