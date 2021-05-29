class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> result;
        unordered_map<int, vector<int>> sections;
        int size = groupSizes.size();
        for (int i = 0; i < size; i++)
        {
            sections[groupSizes[i]].push_back(i);
            if (sections[groupSizes[i]].size() == groupSizes[i])
                result.push_back(move(sections[groupSizes[i]]));
        }
        return result;
    }
};