class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> count;
        istringstream iss(s1 + " " + s2);
        while (iss >> s1)
            count[s1]++;
        vector<string> result;
        for (auto& word : count)
            if (word.second == 1)
                result.emplace_back(word.first);
        return result;
    }
};