class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        int ln = nums.size();
        int power = 1 << ln;
        for (int i = 0; i < power; i++) {
            subset = {};
            for (int j = 0; j < ln; j++) {
                if(i & (1 << j)) subset.push_back(nums[j]);
            } result.push_back(subset);
        } return result;
    }
};