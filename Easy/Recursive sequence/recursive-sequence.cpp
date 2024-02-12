//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
long long mod = 1e9 + 7;
    int getResult(int start, int term, int n) {
        if (term > n) return 0;
        int sub = 1, nums = 1;
        while (nums <= term) {
            sub = (sub * (start % mod)) % mod;
            start++; nums++;
        } return ((sub + ((getResult(start, term + 1, n)) % mod)) % mod);
    }
    long long sequence(int n){
        return getResult(1, 1, n);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends