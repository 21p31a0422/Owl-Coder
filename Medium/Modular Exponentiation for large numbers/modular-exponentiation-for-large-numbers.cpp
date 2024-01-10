//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    long long int binaryExponentiation(long long int x, long long int n, long long m){
	        long long int res = 1;
	        while(n){
	            if(n & 1){
	                n = n - 1;
	                res = (((res % m) * (x % m)) % m);
	            } else {
	                n = n / 2;
	                x = (((x % m) * (x % m)) % m);
	            }
	        }
	        return res;
	    }

	    
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Code here
		    long long int result = binaryExponentiation(x, n, M);
		    return result;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int x, n, m;
    	cin >> x >> n >> m;
    	Solution ob;
    	long long int ans = ob.PowMod(x, n, m);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends