class Solution {
public:
    string convert(string s, int numRows) {
        string result;
        vector<vector<char>> rows(numRows);
        int k = 0;
        int direction = (numRows == 1) - 1;

        for (char c : s)
        {
            rows[k].push_back(c);
            if (k == 0 || k == numRows - 1)
                direction *= -1;
            k += direction;
        }

        for (auto& row : rows)
            for (const char c : row)
                result += c;

        return result;
    }
};