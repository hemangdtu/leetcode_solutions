class Solution {
public:
    int bitwiseComplement(int n) {
        int mask = 1;
        while (n > mask)
            mask = mask * 2 + 1;
        return mask - n;
    }
};