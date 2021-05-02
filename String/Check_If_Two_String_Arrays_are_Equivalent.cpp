class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int size1 = word1.size();
        int size2 = word2.size();
        for(int i = 1; i<size1; i++)
            word1[0] += word1[i];
        for(int i = 1; i<size2; i++)
            word2[0] += word2[i];
        return (word1[0] == word2[0]);
    }
};