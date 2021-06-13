class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> Q;
        int c[2] = {0, 0};
        for (int s : students)
        {
            Q.push(s);
            c[s] += 1;
        }
        
        for (int s : sandwiches)
        {
            if (c[s] == 0) break;
            while (Q.front() != s)
            {
                Q.pop();
                Q.push(1 - s);
            }
            c[s]-- ;
        }
        return c[0] + c[1];
    }
};