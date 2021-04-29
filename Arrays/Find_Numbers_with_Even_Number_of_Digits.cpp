class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0, size = nums.size();
        for(int i = 0; i<size; i++)
        {
            string value = to_string(nums[i]);
            if(value.size() % 2 == 0)
                count++;
        }
        return count;
    }
};