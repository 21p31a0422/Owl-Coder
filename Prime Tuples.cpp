// This code is a problem from Codechef
// Primes Tuples
#include<bits/stdc++.h>
using namespace std;


int primeTuples(int n) {
    vector<int> primes(n + 1, 1); // Asieve of primes
    primes[0] = 0;
    primes[1] = 0;
    for(int i = 2; i < n + 1; i++) {
        if(primes[i]){
            for (int j = i * i; j < n + 1; j += i) {
                primes[j] = 0;
            }
        }
    }


    int a = 2;
    int cnt = 0;
    for(int k = 3; k < n; k += 2) {
        if(primes[k]){
            if(primes[a + k] && (a + k < n)) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    int ans = primeTuples(n);
    cout << ans;
    // for(int x = 2; x < 100; x++) {
    //     int res = primeTuples(x);
    //     cout << x << " " << res << '\n';
    // }
}