class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int i = 0;
        while(i < students.size() && students.size() > 0) {
            if (students[0] == sandwiches[0]) {
                students.erase(students.begin()); sandwiches.erase(sandwiches.begin()); i = 0;
            } else {
                int front = students[0];
                students.erase(students.begin());
                students.push_back(front);
                i++;
            }
        } if (students.size()) return i;
        else return 0;
    }
};