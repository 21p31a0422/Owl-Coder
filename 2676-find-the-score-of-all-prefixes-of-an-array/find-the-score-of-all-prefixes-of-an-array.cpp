class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> result;
        long long prefix = 0;
        int mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            prefix += (mx + nums[i]);
            result.push_back(prefix);
        } return result;
    } 
};