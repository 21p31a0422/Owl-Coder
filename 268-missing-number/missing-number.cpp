class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numTotal = 0, ln = nums.size();
        for(int i = 0; i < ln; i++) {
            numTotal += nums[i];
        } return (((ln * (ln + 1)) / 2) - numTotal);
    }
};