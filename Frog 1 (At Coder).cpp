#include<bits/stdc++.h>
using namespace std;

int dp[100001];

int Fun(int idx, int A[], int n) {
    // base case
    if (idx == n - 1) return 0;
    if (dp[idx] != -1) return dp[idx];


    // recursive call 
    // One Step
    int left = abs(A[idx] - A[idx + 1]) + Fun(idx + 1, A, n);

    // Two steps
    int right = INT_MAX;
    if (idx + 2 <= n - 1) {
        right = abs(A[idx] - A[idx + 2]) + Fun(idx + 2, A, n);
    }
    return dp[idx] = min(right, left);
}


int main(){
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) cin >> A[i];

    memset(dp, -1, sizeof(dp));
    int ans = 0;
    ans = Fun(0, A, n);
    cout << ans;

}


