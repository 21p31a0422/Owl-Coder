class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        priority_queue<int, vector<int>, greater<int>> q;
        unordered_map<int, int> mp;
        for(int i : arr) {mp[i]++;}
        for(auto it : mp){
            q.push(it.second);
        }
        while(k--){
            int num = q.top();
            q.pop(); 
            if (num != 1){
                num--;
                q.push(num);
            }
        } return q.size();
        // return 1;
    }
};