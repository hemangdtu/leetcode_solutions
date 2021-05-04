class Solution {
public:
    int maxPower(string s) {
        int result = 1, count = 1, size = s.length();
        for (int i = 1; i < size; i++)
        {
            if (s[i] == s[i-1])
                ++count;
            else
                count = 1;
            result = max(result, count);
        }
        return result;
    }
};