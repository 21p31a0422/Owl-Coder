// An array will be given in that all elements will repeat 3 times but only one element will repeat once. You have to return the single occured element.

// Single Number II in LeetCode


#include<bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++) cin >> A[i];
    int ans = 0;
    for(int i =0; i < 32; i++){
        int ocount = 0;
        for(int j = 0; j < n; j++){
            if((A[j] & (1 << i)) > 0) ocount++;
        }
        if(ocount % 3 != 0) ans = ans | (1 << i);
    }
    cout << ans << endl;
}