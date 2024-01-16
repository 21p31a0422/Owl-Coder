// Codeforces 920 Div 3 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int x1, x2, x3, x4, y1, y2, y3, y4, diag1, diag2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        cin >> x4 >> y4;
        if (x1 == x2){
            diag1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        } else if (x1 == x3) {
            diag1 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
        } else {
            diag1 = sqrt((x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1));
        }
        // diag1 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
        // diag2 = sqrt((x4 - x2) * (x4 - x2) + (y4 - y2) * (y4 - y2));
        cout << (diag1 * diag1) << '\n';
    }
}