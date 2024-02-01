class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0, cnt = 0;
        for (int i = 0; i < 32; i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] & (1 << i)) {
                    cnt++;
                }
            } if (cnt % 3 != 0) res = res | (1 << i); 
            cnt = 0;
        } return res;
    }
};