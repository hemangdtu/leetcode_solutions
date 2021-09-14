class Solution {
public:
    string reverseOnlyLetters(string s) {
        string result;
        int i = s.length() - 1;
        for(auto& c : s)
        {
            if(isalpha(c))
            {
                while(!isalpha(s[i]))
                    --i;
                result.push_back(s[i]);
                --i;
            }
            else
                result.push_back(c);
        }
        return result;
    }
};