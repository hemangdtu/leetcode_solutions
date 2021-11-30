class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.size() == 0) return 0;
        int m = matrix.size(), n = matrix[0].size();
        int result = 0;
        vector<int> left(n, 0), right(n, n - 1), hite(n, 0);
        for(int i = 0 ; i<m; i++)
        {
            int leftBound = 0, rightBound = n-1;
            for(int j = 0 ; j<n; j++)
                hite[j] = matrix[i][j] == '1' ? hite[j] + 1 : 0;
            for(int j = 0 ; j<n; j++)
            {
                if(matrix[i][j] == '1') left[j] = max(left[j], leftBound);
                else
                {
                    leftBound = j + 1;
                    left[j] = 0;
                }
            }
            for(int j = n-1 ; j>=0; j--)
            {
                if(matrix[i][j] == '1') right[j] = min(right[j], rightBound);
                else
                {
                    right[j] = n - 1;
                    rightBound = j - 1;
                }
            }
            for(int j = 0 ; j<n; j++)
                result = max(result, (right[j] - left[j] + 1) * hite[j]);
        }
        return result;
    }
};