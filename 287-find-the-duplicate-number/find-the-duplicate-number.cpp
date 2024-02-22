class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;
        for(int i : nums){
            if (mp[i]) {ans = i; break;}
            else {mp[i]++;}
        } return ans;
    }
};