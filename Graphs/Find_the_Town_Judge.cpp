class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> degrees(n);
        for (auto& t : trust)
        {
            --degrees[t[0] - 1];
            ++degrees[t[1] - 1];
        } 
        for (int i = 0; i < degrees.size(); ++i)
            if (degrees[i] == n - 1)
                return i + 1;
        return -1;
    }
};