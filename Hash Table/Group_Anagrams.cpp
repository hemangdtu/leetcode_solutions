class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> lib;
        for(auto& str : strs)
        {
            string temp = str;
            sort(temp.begin(), temp.end());
            lib[temp].push_back(str);
        }
        
        vector<vector<string>> result;
        for(auto it = lib.begin(); it != lib.end(); it++)
            result.push_back(it -> second);
        
        return result;
    }
};