class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(auto& ch : columnTitle)
        {
            int digit = ch - 'A' + 1;
            result = result*26 + digit;
        }
        return result;
    }
};