class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d = 0, x = 0, y = 0;
        int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
        
        for(char c : instructions)
        {
            if(c == 'R') d += 1;
            else if(c == 'L') d += 3;
            else if(c == 'G')
            {
                d %= 4;
                x = x + dx[d];
                y = y + dy[d];
            }
        }
        return (x == 0 && y == 0) || d % 4 != 0;
    }
};