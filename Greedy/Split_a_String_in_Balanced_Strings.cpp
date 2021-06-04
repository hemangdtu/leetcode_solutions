class Solution {
public:
    int balancedStringSplit(string s) {
        int result = 0, count = 0;     
        for (auto& c : s)
        {
            count += (c == 'L') ? 1 : -1;            
            if (count == 0)
                result++;
        }
        return result;
    }
};