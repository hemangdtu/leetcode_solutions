class Solution {
private:
    int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    
    int dfs(vector < vector <int> >& grid, int i, int j, int idx)
    {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != 1)
            return 0;
        int ret = 1;
        grid[i][j] = idx;
        for(int k = 0; k < 4; k++)
        {
            int ni = dir[k][0] + i;
            int nj = dir[k][1] + j;
            ret += dfs(grid, ni, nj, idx);
        }
        return ret;
    }
    
public:
    int largestIsland(vector<vector<int>>& grid) {
        int ret = 0, idx = 2;
        vector<int> area(2);
        int n = grid.size(), m = grid[0].size();
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 1)
                {
                    area.push_back(dfs(grid, i, j, idx));
                    ret = max(ret, area.back());
                    idx++;
                }
            }
        }
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 0)
                {
                    set <int> idxs;
                    for(int k = 0; k < 4; k++)
                    {
                        int ni = i + dir[k][0], nj = j + dir[k][1];
                        if(ni < 0 || nj < 0 || ni >= grid.size() || nj >= grid[0].size())
                            continue;
                        if(grid[ni][nj])
                        {
                            idxs.insert(grid[ni][nj]);
                        }
                    }
                    int temp = 1;
                    auto it = idxs.begin();
                    while(it != idxs.end())
                    {
                        temp += area[*it];
                        it++;
                    }
                    ret = max(ret, temp);
                }
            }
        }
        return ret;
    }
};