class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result(2);
        for (auto& i : nums)
            if (nums[abs(i) - 1] < 0)
                result[0] = abs(i);
            else
                nums[abs(i) - 1] *= -1;
        for (int i = 0; i < nums.size(); ++i)
            if (nums[i] > 0)
                result[1] = i + 1;
            else
                nums[i] *= -1;
        return result;
    }
};