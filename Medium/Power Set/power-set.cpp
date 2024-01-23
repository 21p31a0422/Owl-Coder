//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    vector<string> result;
		    string tmp = "";
		    int ln = s.length();
		    int power = (1 << ln);
		    for (int i = 1; i < power; i++) {
		        tmp = "";
		        for (int j = 0; j < ln; j++) {
		            if (i & (1 << j)) tmp += s[j];
		        } result.push_back(tmp);
		    } sort(result.begin(), result.end());
		    return result;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends