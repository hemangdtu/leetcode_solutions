class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int result = 0, r = grid.size(), c = grid[0].size() - 1;
        for (int i = 0; i<r; i++)
        {
            while (c >= 0 && grid[i][c] < 0)
            {
                --c;
            }
            result += grid[0].size() - 1 - c;
        }
        return result;
    }
};