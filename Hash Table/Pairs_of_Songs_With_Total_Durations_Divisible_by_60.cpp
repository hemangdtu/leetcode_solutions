class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int, int> mp;
        int result = 0;
        for(int num : time)
        {
            if(mp.find(60 - num%60) != mp.end()) result += mp[60-num%60];
            if(num%60 == 0) result += mp[0];
            mp[num%60]++;
        }
        return result;
    }
};