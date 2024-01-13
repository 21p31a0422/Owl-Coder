class Solution {
public:
    int minSteps(string s, string t) {
        // map<int, int> ref;
        vector<int>ref(26,0);
        for(int i=0;i<s.size();i++)
        {
            ref[s[i]-'a']++;
            ref[t[i]-'a']--;
        }
        // for (auto it : s) {
        //     ref[it+]++;
        // }
        // for (auto it : t) {
        //     ref[it]--;
        // }
        int res = 0;
        for (auto it : ref) {
            res+=abs(it);
        }
        return res/2;
    }
};