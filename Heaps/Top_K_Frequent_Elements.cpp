bool compare(pair<int, int> &a, pair<int, int> &b) {
    return a.second > b.second;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int ,int> freq;
        
        for(int i = 0; i < nums.size(); i++)
            freq[nums[i]]++;
        
        vector<pair<int, int>> v(freq.begin(), freq.end());
        sort(v.begin(), v.end(), compare);
        
        for(int i = 0; i < k; i++)
            result.push_back(v[i].first);
        return result;
    }
};