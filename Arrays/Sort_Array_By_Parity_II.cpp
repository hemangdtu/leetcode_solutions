class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int j = 1;
        int size = nums.size();
        for (int i = 0; i < size; i += 2)
            if (nums[i] % 2)
            {
                while (nums[j] % 2)
                    j += 2;
                swap(nums[i], nums[j]);
            }
        return nums;
    }
};