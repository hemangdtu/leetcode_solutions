class Solution {
private:
    int convert(string s)
    {
        int base = 1;
        int res = 0;
        for(int i = s.length() - 1; i >= 0; i--)
        {
            res += base * (s[i] - 'a');
            base *= 10;
        }
        return res;
    }
    
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return convert(firstWord) + convert(secondWord) == convert(targetWord);
    }
};