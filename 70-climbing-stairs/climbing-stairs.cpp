class Solution {
public:
    int climbStairs(int n) {
        int prev = 0, curr = 1, tmp = 0;
        while (n--) {
            tmp = curr;
            curr += prev;
            prev = tmp;
        } return curr;
    }
};