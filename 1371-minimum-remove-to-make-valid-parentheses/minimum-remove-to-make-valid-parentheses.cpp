
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int cnt = 0;
        vector<char> arr(s.begin(), s.end()); 
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == '(') cnt++;
            else if (arr[i] == ')') {
                if (cnt == 0) arr[i] = '*'; 
                else cnt--;
            }
        }
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (cnt > 0 && arr[i] == '(') {
                arr[i] = '*';
                cnt--;
            }
        }
        string result = "";
        for (char c : arr) {
            if (c != '*') result += c;
        } return result;
    }
};