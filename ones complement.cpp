#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, mask, result;
    cin >> x;
    int bits = 0;
    bits = floor(log2(x)) + 1;  // for counting the no.of minimum bits required to represent a number in binary
    mask = (1 << bits);         // a 2 power with a value of (2 power bits)
    result = (mask - 1 ) ^ x;   // reducing the mask by 1 and performing xor with the given num
    cout << result;
}