class Solution {
public:
    bool canJump(vector<int>& nums) {
        int result = 0;
        int size = nums.size();
        for (int i = 0; i <= result && i < size; i++)
            result = max(result, nums[i] + i);
        return result >= size - 1;
    }
};