class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> myMap(1e5 + 1, 0);
        for (int i : nums){
            if(myMap[i]) {return i;}
            else myMap[i]++;
        } return 0;
    }
};