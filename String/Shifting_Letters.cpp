class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        string result;
        auto times = accumulate(shifts.cbegin(), shifts.cend(), 0L) % 26;
        for(int i = 0; i < s.length(); i++)
        {
            result.push_back('a' + (s[i] - 'a' + times) % 26);
            times = ((times - shifts[i]) % 26 + 26) % 26;
        }
        return result;
    }
};