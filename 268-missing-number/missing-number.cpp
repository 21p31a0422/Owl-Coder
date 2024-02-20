class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ori = 0, given = 0;
        for(int i = 0; i < nums.size(); i++) {
            given += nums[i];
            ori += (i + 1);
        } return (ori - given);
    }
};