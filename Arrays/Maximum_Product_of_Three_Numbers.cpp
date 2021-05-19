class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int length = nums.size() - 1;
        sort(nums.begin(), nums.end());
        int num1 = nums[length] * nums[length - 1] * nums[length - 2];
        int num2 = nums[0] * nums[1] * nums[length];
        if (nums[0] < 0 && nums[1] < 0)
            return num1 > num2 ? num1 : num2;
        return num1;
    }
};