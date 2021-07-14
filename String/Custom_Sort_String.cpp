class Solution {
public:
    string customSortString(string order, string str) {
        unordered_set<char> s(order.begin(), order.end());
        unordered_map<char, int> counter;
        for(auto& c : str)
            counter[c]++;
        
        string result;
        for(auto& c : order)
            result += string(counter[c], c);
        for(auto& kvp : counter)
            if (!s.count(kvp.first))
                result += string(kvp.second, kvp.first);
        return result;
    }
};