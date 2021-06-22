class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int result = 0, idx_str = 0, idx_w = 0;
        unordered_map<string, int> mp;
        
        for(string word : words)
            mp[word]++;
        
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            idx_str = 0, idx_w = 0;
            string word = it -> first;
            
            for(; idx_w<word.length() && idx_str<s.length(); idx_str++)
                if(word[idx_w] == s[idx_str])
                    idx_w++;
            
            result += idx_w == word.length() ? it->second : 0;
        }
        
        return result;
    }
};