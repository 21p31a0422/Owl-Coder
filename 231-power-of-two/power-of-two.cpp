class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 1) return false;
        return ((1 << (int)log2(n)) == n);
    }
};