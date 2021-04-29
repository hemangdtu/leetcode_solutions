class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        int size = nums.size();
        for(int i = 0; i < size; i++)
            result = result ^ nums[i];
        return result;
    }
};