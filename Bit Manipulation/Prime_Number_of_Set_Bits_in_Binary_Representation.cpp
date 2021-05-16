class Solution {
public:
    bool primeCheck(int n)
    {
        if (n == 0 || n == 1)
            return false;
        else
            for (int i = 2; i <= sqrt(n); ++i)
                if (n % i == 0)
                    return false;
        return true;
    }
    
    int setBitCount(int n)
    {
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        if(n % 2 == 0)
            return setBitCount(n/2);
        return setBitCount(n/2) + 1;
    }
    
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i = left; i<= right; i++)
            if(primeCheck(setBitCount(i)))
                count++;
        return count;
    }
};