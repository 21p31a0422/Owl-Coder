#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    int cnt = 0;
    for(int i = 0; i < 32; i++){
        if((a & (1 << i)) > 0) cnt++;
    }
    cout << cnt;
}