//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int ans = 0, flag = 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '-' && i == 0) {
                flag = 0;
            } else if ((s[i] - '0') >= 0 && (s[i] - '0') <= 9) {
                ans = (ans * 10) + (s[i] - '0');
            } else return -1;
        } if (flag == 1)  return ans;
        return ans * -1; 
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends