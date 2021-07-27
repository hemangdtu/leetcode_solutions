class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> freqs;
        for(auto num: nums)
            freqs[num]++;
        int max_len = 0, lastnum = INT_MIN, lastfreq = 0;
        
        for(pair<int,int> dt : freqs)
        {
            if(lastnum != INT_MIN && dt.first == lastnum + 1)
                max_len = max( lastfreq + dt.second, max_len);
            lastnum = dt.first; lastfreq = dt.second;
        }
        return max_len;
    }
};