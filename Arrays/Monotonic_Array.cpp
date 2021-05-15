class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increaseOrder = false, decreaseOrder = false;
        int size = nums.size();
        for (int i = 0; i + 1 < size; i++)
            if (nums[i] < nums[i + 1])
                increaseOrder = true;
            else if (nums[i] > nums[i + 1])
                decreaseOrder = true;
        return !increaseOrder || !decreaseOrder;
    }
};