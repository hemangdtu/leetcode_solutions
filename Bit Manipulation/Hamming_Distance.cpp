class Solution {
public:
    int hammingDistance(int x, int y) {
        int val = x ^ y;
        int setBits = 0;
        while (val > 0)
        {
            setBits += val & 1;
            val >>= 1;
        }
        return setBits;
    }
};