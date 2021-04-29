class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m, i = 0, size = nums.size(); // Boyer–Moore majority vote algorithm
        for (int j = 0; j < size; j++)
        {
            if (i == 0)
            {
                m = nums[j];
                i = 1;
            }
            else
                (m == nums[j]) ? i++ : i--;
        }
        return m;
    }
};