class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n = nums.size();
        vector <bool> dp(1 << n);
        vector <int> total(1 << n);
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)sum += nums[i];
        if(sum % k || nums[nums.size() - 1] > sum / k)
            return false;
        dp[0] = true;
        sum /= k;
        for(int i = 0; i < (1 << n); i++)
            if(dp[i])
                for(int j = 0; j < n; j++)
                {
                    int temp = i | (1 << j);
                    if(temp != i)
                    {
                        if(nums[j] <= sum - (total[i] % sum))
                        {
                            dp[temp] = true;
                            total[temp] = total[i] + nums[j];
                        }
                        else
                            break;
                    }
                }
        return dp[(1 << n) - 1];
    }
};