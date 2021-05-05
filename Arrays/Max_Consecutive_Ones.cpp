class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxVal=0, i=0, size = nums.size();
        while(i<nums.size())
        {
            int ones=0;
            while(i< size && nums[i]==1)
            {
                ones++;
                i++;
            }
            maxVal = max(maxVal, ones);
            i++;
        }
        return maxVal;
    }
};