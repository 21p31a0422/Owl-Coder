//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> primeDivision(int N){
        // code here
        vector<int> sieve(N + 1, true);
        vector<int> result;
        sieve[0] = false;
        sieve[1] = false;
        for(int i = 2; i < N + 1; i++){
            if (sieve[i]){
                int j = 2;
                while((i * j) < N + 1){
                    sieve[i * j] = false;
                    j++;
                }
            }
        }
        // return sieve;
        for(int k = 2; k < N + 1; k++){
            if(sieve[N - k] && sieve[k]) {
                result.push_back(k);
                result.push_back(N - k);
                return result;
            }
        }
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
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends