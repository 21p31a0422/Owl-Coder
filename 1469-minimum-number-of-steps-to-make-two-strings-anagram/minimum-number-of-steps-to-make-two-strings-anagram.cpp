class Solution {
public:
    int minSteps(string s, string t) {
        map<int, int> ref;
        for (auto it : s) {
            ref[it]++;
        }
        for (auto it : t) {
            ref[it]--;
        }
        int res = 0;
        for (auto it : ref) {
            if (it.second < 0) res += (it.second * -1);
        }
        return res;
    }
};