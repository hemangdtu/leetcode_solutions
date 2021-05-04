class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> lookup;
        for (auto& j : jewels)
            lookup.emplace(j);
        int result = 0;
        for (auto& s : stones)
            result += lookup.count(s);
        return result;
    }
};