class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = INT_MIN;
        int curr = INT_MIN;
        for (const auto &x : nums)
        {
            curr = (curr == INT_MIN) ? x : max(curr + x, x);
            result = max(result, curr);
        }
        return result;
    }
};