#include<bits/stdc++.h>
using namespace std;

int MaxPoints(int n, int idx, int work, vector<vector<int>>&A, vector<vector<int>>&dp) {
    if (idx >= n) return 0;
    if (dp[idx][work] != -1) return dp[idx][work];
    if (work == 0) {
        return dp[idx][work] = (A[idx][0] + max(MaxPoints(n, idx + 1, 1, A, dp), MaxPoints(n, idx + 1, 2, A, dp)));
    } if (work == 1) {
        return dp[idx][work] = (A[idx][1] + max(MaxPoints(n, idx + 1, 0, A, dp), MaxPoints(n, idx + 1, 2, A, dp)));
    }
    return dp[idx][work] = (A[idx][2] + max(MaxPoints(n, idx + 1, 0, A, dp), MaxPoints(n, idx + 1, 1, A, dp)));
}


int main() {
    int n; 
    cin >> n;
    vector<vector<int>> A(n, vector<int>(3, 0)), dp(n, vector<int>(3, -1));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    cout << max(MaxPoints(n, 0, 0, A, dp), max(MaxPoints(n, 0, 1, A, dp), MaxPoints(n, 0, 2, A, dp)));
}