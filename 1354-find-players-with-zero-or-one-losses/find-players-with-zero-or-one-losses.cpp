class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> points;
        vector<vector<int>> answer = {{}, {}};
        for(int i = 0; i < matches.size(); i++) {
            if (points[matches[i][0]] == 0) {
                points[matches[i][0]] = 0;
            } points[matches[i][1]]++;
        }
        for(auto it : points) {
            if (it.second == 0) {
                answer[0].push_back(it.first);
            } else if (it.second == 1) {
                answer[1].push_back(it.first);
            }
        } return answer;
    }
};