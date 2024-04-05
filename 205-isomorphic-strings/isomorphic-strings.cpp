class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;
        vector<int> checks(300, 0), checkt(300, 0);
        for(int i = 0; i < s.size(); i++) {
            if (checks[s[i]] != checkt[t[i]]) {return false;}
            checks[s[i]] = i + 1, checkt[t[i]] = i + 1;
        } return true;
    }
};