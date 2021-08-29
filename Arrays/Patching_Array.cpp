class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int result = 0;
        for(uint64_t skip = 1, i = 0; skip <= n;)
        {
            if(i < nums.size() && nums[i] <= skip)
                skip += nums[i++];
            else
            {
                skip += skip;
                ++result;
            }
        }
        return result;
    }
};