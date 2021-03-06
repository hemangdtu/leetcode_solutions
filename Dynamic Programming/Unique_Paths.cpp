class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int> (n, 0));
        vector<vector<int>> nbrs = {{1, 0}, {0, 1}};
        dp[m - 1][n - 1] = 1;
        for(int i = m-1; i>=0; i--)
        {
            for(int j = n-1; j>=0; j--)
            {
                for(auto& nbr : nbrs)
                {
                    int x = i + nbr[0];
                    int y = j + nbr[1];
                    if(x < 0 || y < 0 || x >= m || y >= n) continue;
                    dp[i][j] += dp[x][y];
                }
            }
        }
        return dp[0][0];
    }
};