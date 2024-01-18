class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> result;
        long long prefix = 0;
        int mx = 0, val = 0;
        for (int i = 0; i < nums.size(); i++) {
            val = nums[i];
            mx = max(mx, val);
            prefix += (mx + val);
            result.push_back(prefix);
        } return result;
    } 
};