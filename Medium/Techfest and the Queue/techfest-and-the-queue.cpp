//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int primefact(int n){
        int c = 0;
	    for(int i = 2; i <= (sqrt(n) + 1); i++){
	        while(n % i == 0){
	            n = n / i;
	            c++;
	        }
	    }
	    if (n > 1) c++;
	    return c;
	}
	int sumOfPowers(int a, int b){
	    int sum = 0;
	    for(int i = a; i <= b; i++){
	        int x = primefact(i);
	        sum += x;
	    }
	    return sum;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends