class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> occ(nums.size() + 1, 0);
        int ans = 0;
        for(int i : nums){
            if (occ[i]) {ans = i; break;}
            else {occ[i]++;}
        } return ans;
    }
};