class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int, int> count;
        for (auto& x : arr)
            ++count[x];
        vector<int> keys;
        for (auto& kvp : count)
            keys.push_back(kvp.first);
        sort(keys.begin(), keys.end(),
             [](int i, int j) {
                 return abs(i) < abs(j);
             });
        for (auto& x : keys) {
            if (count[x] > count[2*x])
                return false;
            count[2*x] -= count[x];
        }
        return true;
    }
};