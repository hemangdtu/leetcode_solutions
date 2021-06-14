class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> lookup(order.size());
        for (int i = 0; i < order.size(); ++i)
            lookup[order[i] - 'a'] = i;
        
        for (int i = 0; i < words.size() - 1; ++i)
        {
            auto& word1 = words[i];
            auto& word2 = words[i + 1];
            int j = 0;
            
            for (; j < min(word1.length(), word2.length()); ++j)
            {
                if (word1[j] != word2[j])
                {
                    if (lookup[word1[j] - 'a'] > lookup[word2[j] - 'a'])
                        return false;
                    break;
                }
            }
            if (j == min(word1.length(), word2.length()) && word1.length() > word2.length())
                return false;
        }
        return true;
    }
};