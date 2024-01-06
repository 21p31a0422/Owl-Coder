//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    long long a = 1, b = 1, tmp = 0, MOD = (1e9 + 7);
	    while(N--){
	        tmp = b;
	        b = (a + b) % MOD;
	        a = tmp;
	    }
	    return (b * b) % MOD;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends