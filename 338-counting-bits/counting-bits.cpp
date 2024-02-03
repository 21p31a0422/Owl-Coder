class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits(n + 1, 0);
        if (n == 0) return {0};
        if (n == 1) return {0, 1};
        bits[0] = 0; bits[1] = 1;
        for (int i = 2; i <= n; i++) bits[i] = (bits[i / 2] + bits[i % 2]);
        return bits;
    }
};