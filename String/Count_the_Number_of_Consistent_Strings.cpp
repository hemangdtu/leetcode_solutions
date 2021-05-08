class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int result = words.size();
        vector<bool> count(26);
        
        for(auto& c: allowed)
            count[c - 'a'] = true;
        
        for(auto& word: words)
            for(auto& c: word)
                if(!count[c - 'a'])
                {
                    --result;
                    break;
                }
        
        return result;
    }
};