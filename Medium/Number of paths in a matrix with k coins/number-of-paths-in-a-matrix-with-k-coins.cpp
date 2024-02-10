//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    int dp[101][101][101];
    long long getPaths(int i, int j, int n, int k, vector<vector<int>> &arr) {
        if (i >= n || j >= n) return 0;
        if (dp[i][j][k] != -1) return dp[i][j][k];
        if (i == n - 1 && j == n - 1) {
            if (k == arr[n - 1][n - 1]) {return 1;}
            else return 0;
        }
        // if (k == 0) return;
        if (arr[i][j] > k) return 0;
        return dp[i][j][k] = getPaths(i + 1, j, n, k - arr[i][j], arr) + getPaths(i, j + 1, n, k - arr[i][j], arr);
        
    }
    long long numberOfPath(int n, int k, vector<vector<int>> &arr){
        memset(dp, -1, sizeof(dp));
        long long ans = 0;
        ans = getPaths(0, 0, n, k, arr);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends