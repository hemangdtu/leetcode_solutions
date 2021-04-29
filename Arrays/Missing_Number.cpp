class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int esum = 0, sum = 0, size = nums.size();
        for(int i = 0; i<size; i++)
        {
            sum += nums[i];
            esum += i;
        }
        return esum - sum + size;
    }
};