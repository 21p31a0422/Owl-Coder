class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0, mx = INT_MIN;
        for(int i : nums)  {
            curr += i;
            mx = (curr > mx) ? curr : mx;
            curr = (curr < 0) ? 0 : curr;
        } return mx;
    }
};