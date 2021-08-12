class Solution {
private:
    bool match(const string& word, const string& pattern)
    {
        unordered_map<char, char> lookup;
        unordered_set<char> char_set;
        for (int i = 0; i < word.length(); ++i)
        {
            auto& c = word[i], &p = pattern[i];
            if(!lookup.count(c))
            {
                if (char_set.count(p))
                    return false;
                char_set.emplace(p);
                lookup[c] = p;
            }
            if(lookup[c] != p)
                return false;
        }
        return true;
    }
    
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> result;
        for(auto& word : words)
            if(match(word, pattern))
                result.push_back(word);
        return result;
    }
};