class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n % 3 != 2 && n > 0)
            n /= 3;
        return n == 0;
    }
};