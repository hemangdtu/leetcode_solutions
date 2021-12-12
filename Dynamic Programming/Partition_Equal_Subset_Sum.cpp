class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size(), sum = 0, t = 0;
        for(int i = 0; i<n; i++) sum += nums[i];
        if(sum%2 != 0) return false;
        t = sum/2;
        bool dp[n+1][t+1];
        for(int i = 0; i<n+1; i++) dp[i][0] = true;
        for(int j = 1; j<t+1; j++) dp[0][j] = false;
        for(int i = 1; i<n+1; i++)
            for(int j = 1; j<t+1; j++)
                if(nums[i-1] <= j) dp[i][j] = (dp[i-1][j] || dp[i-1][j-nums[i-1]]);
                else dp[i][j] = dp[i-1][j];
        return dp[n][t];
    }
};