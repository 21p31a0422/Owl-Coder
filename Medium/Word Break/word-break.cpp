//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    bool check(int i, string&s, vector<string>&dict) {
        if (i == s.size()) return true;
        for(auto str : dict) {
            if (str.size() <= (s.size() - i) && s.substr(i, str.size()) == str) {
                if (check(i + str.size(), s, dict)) return true;
            }
        } return false;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) {
        return check(0, s, dictionary);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends