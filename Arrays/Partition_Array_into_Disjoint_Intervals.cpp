class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size(), maxVal = INT_MIN;
        vector<int> minVals(n);
        
        minVals[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i)
            minVals[i] = min(minVals[i + 1], nums[i]);
        
        for (int i = 0; i < n; ++i)
        {
            maxVal = max(maxVal, nums[i]);
            if (maxVal <= minVals[i + 1])
                return i + 1;
        }
        return -1;
    }
};