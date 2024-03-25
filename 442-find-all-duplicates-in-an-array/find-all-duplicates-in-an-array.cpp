class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> occ(1e5 + 1, 0), res;
        for (int i : nums) {
            if (occ[i]) {res.push_back(i);}
            else occ[i]++;
        } return res;
    }
};