#include<bits/stdc++.h>
using namespace std;

int Last_Occur(int *arr, int n, int key) {
    // base case
    if (n == 0) return -1; 
    
    // recursive case
    int smallAns = Last_Occur(arr + 1, n - 1, key);

    // using smallAns to get bigAns
    if (smallAns == -1){
        if (arr[0] == key) return 0;
        else return -1;
    } else return smallAns + 1;
}

int main(){
    int n, key; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> key;
    int ans = Last_Occur(arr, n, key);
    cout << ans;
}