class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string tmp = "";
        for(string s : words){
            tmp = s;
            reverse(s.begin(), s.end());
            if (tmp == s) return tmp;
        } return "";
    }
};