//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int countBits(int N, long long int A[])
    {
        
        long long result = 0;
        for(int i = 0; i < 32; i++){
            long long zeroes = 0;
            long long ones = 0;
            for (int j = 0; j < N; j++){
                if((A[j] & (1L << i)) != 0){
                    ones++;
                } else {
                    zeroes++;
                }
            }
            result = (result + (ones * zeroes)) % 1000000007;
        }
        return (((int)(result * 2)) % 1000000007);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        long long int A[N];
        for(int i = 0;i < N; i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.countBits(N, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends