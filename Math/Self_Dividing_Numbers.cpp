class Solution {
public:
    bool divisibilityCheck(int val) {
        for (int j = val; j > 0; j /= 10)
            if (!(j % 10) || val % (j % 10))
                return false;
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for (int i = left; i <= right; ++i)
            if (divisibilityCheck(i))
                result.push_back(i);
        return result;
    }
};