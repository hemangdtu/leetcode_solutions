class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if (mat.empty() || r * c != mat.size() * mat[0].size())
            return mat;

        vector<vector<int>> result(r, vector<int>(c));
        int count = 0;
        for (int i = 0; i < mat.size(); i++)
            for (int j = 0; j < mat[0].size(); ++j)
            {
                result[count / c][count % c] = mat[i][j];
                ++count;
            }
        return result;
    }
};