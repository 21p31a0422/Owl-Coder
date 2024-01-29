//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void Generate(int open, int close, int n, string& st, vector<string>& ans) {
        // base case
        if (open == n && close == n) {ans.push_back(st); return;}
        
        // to pick open
        if (open < n) {
            st.push_back('(');
            Generate(open + 1, close, n, st, ans );
            st.pop_back();
        }
        
        // to pick close
        if (open > close) {
            st.push_back(')');
            Generate(open, close + 1, n, st, ans);
            st.pop_back();
        }
        
    }
    
    vector<string> AllParenthesis(int n) 
    {
        string st;
        vector<string> ans;
        Generate(0, 0, n, st, ans);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends