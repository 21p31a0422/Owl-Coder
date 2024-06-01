//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        vector<int> alpha(26, 0);
        for(char c : s) alpha[c - 97]++;
        int ans = 0;
        for(int i = 0; i < 26; i++) {
            if ((i + 1) & 1) {
                if (alpha[i] & 1) ans++;
            } else {
                if (alpha[i] % 2 == 0 && alpha[i]) ans++;
            }
        } if (ans & 1) return "ODD";
        return "EVEN";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends