class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0, size = strs.size();
        for (int c = 0; c < strs[0].size(); c++)
            for (int r = 1; r < size; r++)
                if (strs[r][c] < strs[r - 1][c])
                {
                    count++;
                    break;
                }
        return count;
    }
};