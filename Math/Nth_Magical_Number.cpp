class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        const int MOD = 1e9 + 7;
        long long low = 1, high = 4e13 + 10, mid, count;
        int lcm = a*b/__gcd(a, b);
        while(low <= high)
        {
            mid = low + (high-low)/2;
            count = (mid/a) + (mid/b) - (mid/lcm);
            if(count < n) low = mid+1;
            else high = mid-1;
        }
        return (high+1) % MOD;
    }
};