class Solution {
public:
    int findComplement(int num) {
        if(num == 0)
            return 1;
        int bitCount = log2(num) + 1;
        int mask = (unsigned)(1 << bitCount) - 1;
        return mask ^ num;
    }
};