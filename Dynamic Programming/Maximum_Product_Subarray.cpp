class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> min_arr(nums.size(), 0), max_arr(nums.size(), 0);
        int result = nums[0];
        min_arr[0] = max_arr[0] = nums[0];
        for(int i = 1; i<nums.size(); i++)
        {
            min_arr[i] = min(nums[i], min((min_arr[i-1]*nums[i]), (max_arr[i-1]*nums[i])));
            max_arr[i] = max(nums[i], max((max_arr[i-1]*nums[i]), (min_arr[i-1]*nums[i])));
            result = max(result, max(min_arr[i], max_arr[i]));
        }
        return result;
    }
};