class Solution {
public:
    int binaryGap(int n) {
        int result = 0;
        int last = -1;
        for (int i = 0; i < 32; i++)
        {
            if ((n >> i) & 1)
            {
                if (last != -1)
                    result = max(result, i - last);
                last = i;
            }
        }
        return result;
    }
};