class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int result = 0, i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            k -= (nums[j] == 0) ? 1 : 0;
            while(k < 0)
            {
                k += (nums[i] == 0) ? 1 : 0;
                i++;
            }
            result = max(result, j - i + 1);
        }
        return result;
    }
};