class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numTotal = 0;
        for(int i = 0; i < nums.size(); i++) {
            numTotal += nums[i];
        } return (((nums.size() * (nums.size() + 1)) / 2) - numTotal);
    }
};