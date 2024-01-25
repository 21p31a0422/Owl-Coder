class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        map<vector<int>, int> mp;
        vector<vector<int>> result;
        vector<int> subset;
        int power = 1 << nums.size();
        for (int i = 0; i < power; i++) { subset = {};
            for (int j = 0; j < nums.size(); j++) {
                if(i & (1 << j)) subset.push_back(nums[j]);
            } 
            if (!mp[subset]) result.push_back(subset); mp[subset]++;
        } return result;
    }
};