class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ons = -1, zrs = 0;
        string res = "";
        for (char c : s){
            if (c == '1') ons++;
            else zrs++;
        } while(ons--){ res += '1';}
        while(zrs--) { res += '0';}
        return (res + '1');
    }
};