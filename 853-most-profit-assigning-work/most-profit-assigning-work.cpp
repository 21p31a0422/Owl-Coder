class Solution {
public:
    int getProfit(vector<int>& mapping, int ind, int dif, int mx_profit) {
        for(int i = ind; i < dif + 1; i++) {
            mx_profit = max(mx_profit, mapping[i]);
        } return mx_profit;
    }
    
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<int> mapping(1e5 + 1, 0);
        int total_profit = 0;
        sort(worker.begin(), worker.end());

        for(int i = 0; i < difficulty.size(); i++) mapping[difficulty[i]] = max(mapping[difficulty[i]], profit[i]);


        int prev_profit = 0;
        for(int j = 0; j < worker.size(); j++) {
            if (j == 0) prev_profit = getProfit(mapping, 0, worker[j], prev_profit);
            else prev_profit = getProfit(mapping, worker[j - 1], worker[j], prev_profit);
            total_profit += prev_profit;
        }
        return total_profit;
    }
};