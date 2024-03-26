class Solution {
public:
    int getPositiveIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > 0) return i;
        } return nums.size();
    }
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int positiveIndex = getPositiveIndex(nums), res = 1, prev = 0;
        if (positiveIndex == nums.size()) return 1;
        for (int i = positiveIndex; i < nums.size(); i++) {
            if (res != nums[i] && prev != nums[i]) return res;
            else if (prev != nums[i]) res++;
            prev = nums[i];
        } return res;
    }
};