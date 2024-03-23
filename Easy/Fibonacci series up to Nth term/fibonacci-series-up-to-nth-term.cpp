//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        n--;
        vector<int> res = {0, 1};
        int i = 0, MOD = 1e9 + 7;
        while(n--){
            res.push_back(((res[i] % MOD) + (res[i + 1] % MOD)) % MOD) ;
            i++;
        } return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends