//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<vector<int>> result;
        vector<int> ele;
        for (int i = 0; i < (1 << A.size()); i++) {
            ele = {};
            for (int j = 0; j < A.size(); j++) {
                if (i & (1 << j)) ele.push_back(A[j]);
            } result.push_back(ele);
        } sort(result.begin(), result.end());
        return result;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends