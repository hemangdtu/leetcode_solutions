class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        unordered_map<int, int> mp;
        for(auto trip : trips)
        {
            for(int j = trip[1]; j<trip[2]; j++)
            {
                mp[j]+=trip[0];
                if(mp[j] > capacity) return false;
            }
        }
        return true;
    }
};