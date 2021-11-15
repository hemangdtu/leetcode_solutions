class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if(nums.size()==1) return nums;
        sort(nums.begin(),nums.end());
        vector<int> dp(nums.size(), 1);
        vector<int> end_index(nums.size(), -1);
        int start_index = 0;
        for(int i=1;i<nums.size();i++)
        {
            for(int j = 0; j<i; j++)
            {
                if(nums[i]%nums[j]==0 && dp[j]>=dp[i])
                {
                    dp[i]++;
                    end_index[i] = j;
                }
            }
            if(dp[i] > dp[start_index]) start_index = i;
        }
        vector<int> ans(dp[start_index], 0);
        for(int i = 0, index = start_index; i<ans.size(); i++)
        {
            ans[i] = nums[index];
            index = end_index[index];
        }
        return ans;
    }
};