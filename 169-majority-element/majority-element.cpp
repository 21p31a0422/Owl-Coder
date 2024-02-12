class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ln = (nums.size() / 2), ans = 0;
        for (int i : nums) { mp[i]++; }
        for (auto it : mp) {
            if (it.second > ln) ans = it.first;
        } return ans;
    }
};