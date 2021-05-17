class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        if(row == 0 || col == 0)
            return 0;
        int result = 0;
        for(int i = 0; i<row; i++)
        {
            for(int j = 0; j<col; j++)
            {
                if(grid[i][j] == 0)
                    continue;
                if(i == 0 || grid[i-1][j] == 0)
                    result++;
                if(i == row - 1 || grid[i+1][j] == 0)
                    result++;
                if(j == 0 || grid[i][j-1] == 0)
                    result++;
                if(j == col - 1 || grid[i][j+1] == 0)
                    result++;
            }
        }
        return result;
    }
};