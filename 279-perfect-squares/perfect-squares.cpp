class Solution {
public:
    int solve(int n, vector<int>& dp) {
        if (n == 0) return 0;
        if (dp[n] != INT_MAX) return dp[n];
        int ans = INT_MAX;
        for (int i = 1; i * i <= n; i++) {
            ans = min(ans, solve(n - i * i, dp) + 1);
        }
        dp[n] = ans;
        return dp[n];
    }
    int numSquares(int n) {
        vector<int> dp(n + 1, INT_MAX);
        return solve(n, dp);
    }
};