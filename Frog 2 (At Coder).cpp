#include<bits/stdc++.h>
using namespace std;

int dp[100001];

int Fun(int idx, int A[], int n, int k) {
    // base case
    if (idx == n - 1) return 0;
    if (dp[idx] != -1) return dp[idx];
    int ans = INT_MAX;

    // recursive call
    for (int i = 1; i <= k; i++) {
        if (idx + i <= n - 1) {
            ans = min(ans, abs(A[idx] - A[idx + i]) + Fun(idx + i, A, n, k));
        }
    }
    return dp[idx] = ans;
}


int main(){
    int n, k;
    cin >> n >> k;
    int A[n];
    for (int i = 0; i < n; i++) cin >> A[i];

    memset(dp, -1, sizeof(dp));
    int ans = 0;
    ans = Fun(0, A, n, k);
    cout << ans;

}


