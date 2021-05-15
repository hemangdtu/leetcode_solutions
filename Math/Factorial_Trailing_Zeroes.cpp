class Solution {
public:
    int trailingZeroes(int n) {
        int val = 0;
        
        while (n > 0)
        {
            val += n / 5;
            n /= 5;
        }
        return val;
    }
};