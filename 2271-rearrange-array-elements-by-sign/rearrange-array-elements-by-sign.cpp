class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        int k = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > 0) {
                res[k] = nums[i]; 
                k += 2;   
            }
        } k = nums.size() - 1;
        for (int i = nums.size() - 1; i > -1; i--) {
            if (nums[i] < 0) {
                res[k] = nums[i];
                k -= 2;
            }
        } 
        return res;
    }
};