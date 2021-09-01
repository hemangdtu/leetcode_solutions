class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int result = 0;
        for(int num : nums)
        {
            if(num != INT_MAX)
            {
                int start = num, count = 0;
                while(nums[start] != INT_MAX)
                {
                    int temp = start;
                    start = nums[start];
                    nums[temp] = INT_MAX;
                    ++count;
                }
                result = max(result, count);
            }
        }
        return result;
    }
};