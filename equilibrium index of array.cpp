#include <bits/stdc++.h>
using namespace std;

// Algo - Prefix 

int equilibriumIndex(int n, vector<int> &arr){
    int pre = 0;
    int post = 0;
    post = accumulate(arr.begin(), arr.end(), post) - arr[0];
    for(int j = 1; j < n; j++){
        pre += arr[j - 1];
        post -= arr[j];
        if(pre == post){
            return j;
        }
    } 
    return -1;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        int result = equilibriumIndex(n, arr);
        cout << result << "\n";
    }
}