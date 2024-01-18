//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> countMultiples(int arr[], int q[], int n, int m) ;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n >> m;
        int q[m], arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (i = 0; i < m; i++) cin >> q[i];

        vector<int> answering = countMultiples(arr, q, n, m);
        for (auto it : answering) cout << it << " ";
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends



vector<int> countMultiples(int a[], int q[], int n, int m) {
    // Your code goes here  
    int mx = *max_element(a, a+n);
    vector<int> count(mx+1 , 0);
    vector<int> ans(mx+1 , 0);
    for(int i = 0; i<n; i++){
        count[a[i]]++;
    }
    for(int i= 1; i<=mx; i++){
        for(int j= i; j<=mx ;j+=i){
            ans[i] += count[j];
        }
    }
    vector<int> res;
    for(int i= 0; i< m ; i++){
        if(q[i]>mx){
            res.push_back(0);
        }
        else
            res.push_back(ans[q[i]]);
    }
    return res;
    
}