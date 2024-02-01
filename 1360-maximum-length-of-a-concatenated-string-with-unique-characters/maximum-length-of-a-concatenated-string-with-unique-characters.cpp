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
        int mx = 0;
        vector<string> comb;
        string seq;
        for (int i = 0; i < (1 << arr.size()); i++) {
            seq = "";
            for (int j = 0; j < arr.size(); j++) {
                if (i & (1 << j)) seq += arr[j];
            } if (unique(seq)) mx = (seq.size() > mx) ? seq.size() : mx;
        }
        return mx;
    } 
};