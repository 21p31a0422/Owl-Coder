class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> freq(59, 0);
        for(char c : s) freq[c - 'A']++;
        int cnt = 0, odd = 0;
        for (int num : freq) {
            if (num & 1) odd++;
            cnt += num;     
        }
        if (odd > 1) return cnt - odd + 1;
        if (1 == odd) return cnt;
        return cnt + odd;
    }
};

