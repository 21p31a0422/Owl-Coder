// Codeforces 920 Div 3 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, rem = 0, add = 0;
        string s, f;
        cin >> n;
        cin >> s;
        cin >> f;
        for(int i = 0; i < n; i++){
            if ((s[i] == '1') && (f[i] == '0')) rem++;
            if ((s[i] == '0') && (f[i] == '1')) add++;
        } cout << max(rem, add) << '\n';
    }
}
