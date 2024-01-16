class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> mp1(26, 0), mp2(26, 0);
        for(char it : word1) mp1[it - 'a']++;
        for(char it : word2) {
            if (!mp1[it - 'a']) return false;
            mp2[it - 'a']++;
        }
        sort(mp1.begin(), mp1.end());
        sort(mp2.begin(), mp2.end());
        return mp1 == mp2;
    }
};