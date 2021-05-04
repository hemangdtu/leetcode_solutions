class Solution {
public:
    bool judgeCircle(string moves) {
        int vertical = 0, horizontal = 0;
        for (auto& move : moves)
        {
            switch (move)
            {
                case 'U':
                    vertical++;
                    break;
                case 'D':
                    vertical--;
                    break;
                case 'R':
                    horizontal++;
                    break;
                case 'L':
                    horizontal--;
                    break;
            }
        }
        return vertical == 0 && horizontal == 0;
    }
};