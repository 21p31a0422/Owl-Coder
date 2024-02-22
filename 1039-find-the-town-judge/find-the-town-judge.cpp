class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> ppl(n + 1, 0), faith(n + 1, 0);
        // for(auto it : trust){
        for(vector<int> it : trust) {
            ppl[it[0]] = 1;
            faith[it[1]]++;
        } for (int i = 1; i < n + 1; i++){
            if(!ppl[i] && faith[i] == (n - 1)) return i;
        } return -1;
    }
};