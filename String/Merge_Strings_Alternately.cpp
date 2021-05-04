class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int size1 = size(word1), size2 = size(word2);
        for (int i = 0; i < size1 || i < size2; i++)
        {
            if (i < size1)
                result.push_back(word1[i]);
            if (i < size2)
                result.push_back(word2[i]);
        }
        return result;
    }
};