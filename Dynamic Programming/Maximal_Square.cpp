class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size(), ans = 0;
        if(m == 0) return ans;
        int n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for(int j = 0; j<n; j++)
        {
            dp[0][j] = (matrix[0][j] == '1');
            ans = max(ans, dp[0][j]);
        }
        for(int i = 0; i<m; i++)
        {
            dp[i][0] = (matrix[i][0] == '1');
            ans = max(dp[i][0], ans);
        }
        for(int i = 1; i<m; i++)
            for(int j = 1; j<n; j++)
            {
                if(matrix[i][j] == '1') dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1])+1;
                ans = max(ans, dp[i][j]*dp[i][j]);
            }
        return ans;
    }
};