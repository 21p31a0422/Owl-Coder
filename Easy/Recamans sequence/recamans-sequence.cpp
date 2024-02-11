//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        unordered_map<int, int> mp;
        vector<int> ans={0};
        mp[0]++;
        for(int i=1;i<n;i++){
            int final, n=ans.size();
            if((ans[n-1]-i)<0 || mp[ans[n-1]-i]) final=ans[n-1]+i;
            else final=ans[n-1]-i;
            ans.push_back(final);
            mp[final]++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends