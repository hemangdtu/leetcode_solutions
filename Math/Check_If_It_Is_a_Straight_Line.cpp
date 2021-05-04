class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int X = coordinates[0][0], Y = coordinates[0][1];
        int x_diff = coordinates[1][0] - X;
        int y_diff = coordinates[1][1] - Y;
        int size = coordinates.size();
        for(int i = 2; i < size; i++)
        {
            int x = coordinates[i][0], y = coordinates[i][1];
            if(x_diff*(y-Y) != y_diff*(x-X))
                return false;
        }
        return true;
    }
};