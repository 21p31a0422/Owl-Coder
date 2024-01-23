class Solution {
public:
    bool unique(string s) {
        vector<int> charArray(26, 0);
        for (char c : s) {
            charArray[c - 'a']++;
            if (charArray[c - 'a'] > 1) return false;
        } return true;
    } 

    int maxLength(vector<string>& arr) {
        vector<string> comb;
        string seq;
        for (int i = 0; i < (1 << arr.size()); i++) {
            seq = "";
            for (int j = 0; j < arr.size(); j++) {
                if (i & (1 << j)) seq += arr[j];
            } comb.push_back(seq);
        }
        int mx = 0;
        for(int i = 0; i < comb.size(); i++){
            if (unique(comb[i])) mx = (comb[i].size() > mx) ? comb[i].size() : mx;
        } return mx;
    } 
};