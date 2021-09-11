class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int result = 0;
        vector<unordered_map<long long, int>> dp(nums.size());
        for(int i = 1; i < nums.size(); ++i)
        {
            for(int j = 0; j < i; ++j)
            {
                const auto diff = static_cast<long long>(nums[i]) - nums[j];
                ++dp[i][diff];
                if(dp[j].count(diff))
                {
                    dp[i][diff] += dp[j][diff];
                    result += dp[j][diff];
                }
            }
        }
        return result;
    }
};