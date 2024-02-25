//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    // Complete this function
    long long int count(long long int n)
    {
    	vector<int> ways(n + 1, 0);
    	ways[0] = 1;
    	vector<int> moves = {3, 5, 10};
    	for(int i = 0; i < 3; i++){
    	    for(int j = moves[i]; j <= n; j++){
    	        ways[j] += ways[j - moves[i]];
    	    }
    	} return ways[n];
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		Solution obj;
		cout<<obj.count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends