class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int result = 0, max = 0;
        for (auto& i : rectangles)
        {
            int side = min(i[0], i[1]);
            if (max < side)
            {
                result = 1;
                max = side;
            }
            else if (max == side)
                result++;
        }
        return result;
    }
};