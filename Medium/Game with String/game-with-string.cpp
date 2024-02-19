//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        priority_queue<int> q;
        vector<int> mp(26, 0);
        for(char c : s) {
            mp[c - 'a']++;
        } for(int i = 0; i < 26; i++) {
            if(mp[i]) q.push(mp[i]);
        } while(!q.empty() && k) {
            int n = q.top();
            q.pop();
            n--;
            k--;
            q.push(n);
        } int ans = 0; 
        while(!q.empty()) {
            int num = q.top();
            q.pop();
            ans += (num * num);
        } return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends