class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() < 2)
            return s.length();
        
        int max_len = 0, repeated = 0;
        
        for(int i=0; i<s.length(); i++)
        {
            int tmp_len = 0;
            unordered_map<char,int> dict;
            for(int j=i; j<s.length(); j++)
            {
                if(!dict.count(s[j]))
                {
                    dict[s[j]]++;
                    max_len = max(++tmp_len, max_len);
                }
                else
                    break;
            }
        }
        return max_len;
    }
};