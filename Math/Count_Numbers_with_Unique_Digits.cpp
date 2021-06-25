class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0)
            return 1;
        
        int ans = 10, base = 9;
        
        for(int i = 2; i <= n && i <= 10; i++)
        {
            base = base * (9 + 2 - i);
            ans += base;
        }
        return ans;
    }
};