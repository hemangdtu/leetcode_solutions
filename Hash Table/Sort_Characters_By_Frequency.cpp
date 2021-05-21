class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (int i = 0; i<s.size(); i++)
            freq[s[i]]++;

        vector<string> counts(s.size() + 1);
        for (auto& i : freq)
            counts[i.second].push_back(i.first);
            
        string result;
        for (int count = counts.size() - 1; count >= 0; count--)
            for (auto& c : counts[count])
                result += string(count, c);
        
        return result;
    }
};