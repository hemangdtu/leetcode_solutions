class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> result;
        for (auto& candy : candyType)
            result.emplace(candy);
        return min(result.size(), candyType.size() / 2);
    }
};