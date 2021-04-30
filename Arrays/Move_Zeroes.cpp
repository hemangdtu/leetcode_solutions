class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        if(size == 1)
            return;
        int count = 0;
        for (int i = 0; i < size; i++)
            if (nums[i] != 0)
                nums[count++] = nums[i];
        while (count < size)
            nums[count++] = 0;
    }
};