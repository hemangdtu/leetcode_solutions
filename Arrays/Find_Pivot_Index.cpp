class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totSum = accumulate(nums.begin(), nums.end(), 0);
        int lSum = 0, size = nums.size();
        for(int i = 0; i < size; i++)
        {
            if (lSum == (totSum - lSum - nums[i]))
                return i;
            lSum += nums[i];
        }
        return -1;
    }
};