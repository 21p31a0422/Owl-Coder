//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        string res;
        bool check = true;
        for (int i = s.size() - 1; i > -1; i--) {
            if (s[i] == '1') {
                if (check) {
                    res = '0' + res;
                } else {
                    res = '1' + res;
                }
            } else {
                if (check) {
                    res = '1' + res; check = false;
                } else {
                    res = '0' + res;
                }
            }
        } if (check) res = '1' + res;
        int j = -1;
        check = true;
        while (check) {
            j++;
            if (res[j] == '1') check = false;
        }
        
        return res.substr(j);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends