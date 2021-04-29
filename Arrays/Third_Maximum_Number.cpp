class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int idx = n - 1 , i , distinctCount = 0;
        while(idx >= 0)
        {
            distinctCount++;
            i = idx - 1;
            while(i >= 0 && nums[i] == nums[idx])
                i--;
            if(i == -1)
                return nums[n - 1];
            idx = i;
            if(distinctCount == 2)
                return nums[idx];
        }
        return -1;
    }
};