class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ins = 0, size = nums.size();
        int top = nums[0];
        for(int i = 1; i < size; i++) {
            if (nums[i] > top)
                top = nums[i];
            else
            {
                ins += (top - nums[i] + 1);
                top++;
            }
        }
        return ins;
    }
};