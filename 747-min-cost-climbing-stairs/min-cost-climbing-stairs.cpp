class Solution {
public:
    int DarkPhoenix(int i, vector<int>& cost, vector<int>& dp) {
        if (i == cost.size()) return 0;
        if (i > cost.size()) return INT_MAX;
        if (dp[i] != -1) return dp[i];
        return dp[i] = cost[i] + min(DarkPhoenix(i + 1, cost, dp), DarkPhoenix(i + 2, cost, dp));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(), -1);
        return min(DarkPhoenix(0, cost, dp), DarkPhoenix(1, cost, dp));
    }
};