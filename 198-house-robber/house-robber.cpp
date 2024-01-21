class Solution {
public:
    int fun(int ind, int n, vector<int>& nums, vector<int>& v) {
        if (ind > n - 1) return 0;
        if (ind == n - 1) return nums[n - 1];
        if (v[ind] != -1) return v[ind];
        else return v[ind] = max(nums[ind] + fun(ind + 2, n, nums, v), fun(ind + 1, n, nums, v));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(nums.size(), -1);
        return fun(0, n, nums, v);
    }
};