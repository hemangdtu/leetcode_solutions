class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int bitsStatus = 0;
        int size = nums.size();
        
        for (int i = 0; i < size; i++)
            bitsStatus = bitsStatus | nums[i];

        int result = bitsStatus * pow(2, size-1);

        return result;
    }
};