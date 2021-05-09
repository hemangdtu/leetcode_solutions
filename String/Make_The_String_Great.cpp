class Solution {
public:
    string makeGood(string s) {
        string result;
        for (auto& ch : s)
        {
            char ctr = islower(ch) ? toupper(ch) : tolower(ch);
            if (!result.empty() && result.back() == ctr)
                result.pop_back();
            else
                result.push_back(ch);
        }
        return result;
    }
};