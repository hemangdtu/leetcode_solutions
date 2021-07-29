class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        for (int i = 0; i < mat.size(); ++i)
        {
            for (int j = 0; j < mat[i].size(); ++j)
            {
                if(!mat[i][j])
                    continue;
                mat[i][j] = numeric_limits<int>::max();
                if(i > 0 && mat[i - 1][j] != numeric_limits<int>::max())
                    mat[i][j] = min(mat[i][j], mat[i - 1][j] + 1);
                if (j > 0 && mat[i][j - 1] != numeric_limits<int>::max())
                    mat[i][j] = min(mat[i][j], mat[i][j - 1] + 1);
            }
        }

        for(int i = mat.size() - 1; i >= 0; --i)
        {
            for(int j = mat[i].size() - 1; j >= 0; --j)
            {
                if(!mat[i][j])
                    continue;
                if (i < mat.size() - 1 && mat[i + 1][j] != numeric_limits<int>::max())
                    mat[i][j] = min(mat[i][j], mat[i + 1][j] + 1);
                if (j < mat[i].size() - 1 && mat[i][j + 1] != numeric_limits<int>::max())
                    mat[i][j] = min(mat[i][j], mat[i][j + 1] + 1);
            }
        }

        return mat;
    }
};