class Solution {
public:
    int longestPalindrome(string s) {
        int counter = 0;
        int length = s.length();
        for (auto c = 'A'; c <= 'z'; ++c)
            counter += count(s.begin(), s.end(), c) & 1;
        return length - counter + (counter > 0);
    }
};