// This program is to find the index of first occurence of a key.
// Using Recursion

#include<bits/stdc++.h>
using namespace std;

int First_Occur(int* arr, int n, int key) {
    if (n == 0) return -1; // base case
    if (arr[0] == key) return 0;  // when key is met
    int smallAns = First_Occur(arr+1, n-1, key);// breaking into small pblms
    if (smallAns<0) return smallAns; // if key is not found
    return 1+smallAns; // increment 1 in every call
}

int main(){
    int n, key; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> key;
    int ans = First_Occur(arr, n, key);
    cout << ans;
}