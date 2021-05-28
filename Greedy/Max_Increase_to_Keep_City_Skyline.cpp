class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> rowMaxes(grid.size());
        vector<int> colMaxes(grid[0].size());
        
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[i].size(); j++)
            {
                rowMaxes[i] = max(rowMaxes[i], grid[i][j]);
                colMaxes[j] = max(colMaxes[j], grid[i][j]);
            }
        
        int result = 0;
        
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[i].size(); j++)
                result += min(rowMaxes[i], colMaxes[j]) - grid[i][j];
        
        return result;
    }
};