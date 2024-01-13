class Solution {
public:
    int minSteps(string s, string t) {
        map<int, int> ref;
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
            res+=abs(it.second);
        }
        return res/2;
    }
};