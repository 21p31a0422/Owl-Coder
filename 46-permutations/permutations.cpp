class Solution {
public:
    void solve(vector<int>& nums, vector<int>& tmp, vector<int>& freq, vector<vector<int>>& res) {
        // Base Case
        if (tmp.size() == nums.size()) {
            res.push_back(tmp);
            return;
        }
         
        // Recursive case using For Loop
        for(int i = 0; i < nums.size(); i++) {
            if (freq[i] == 0) {
                freq[i] = 1;
                tmp.push_back(nums[i]);
                solve(nums, tmp, freq, res);
                tmp.pop_back();
                freq[i] = 0;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> freq(nums.size(), 0);
        vector<int> tmp;
        solve(nums, tmp, freq, res);
        return res;
    }
};