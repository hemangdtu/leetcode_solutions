class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(auto i : nums)
            freq[i]++;
        vector<int> result;
        for(auto i : freq)
            if(i.second == 1)
                result.push_back(i.first);
        return result;
    }
};