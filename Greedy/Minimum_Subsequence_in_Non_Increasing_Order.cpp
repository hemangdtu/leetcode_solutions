class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int curr = 0;
        int total = accumulate(nums.begin(), nums.end(), 0);
        sort(nums.begin(), nums.end(), greater<int>());
        int result = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            curr += nums[i];
            if (curr > total - curr)
            {
                result = i + 1;
                break;
            }
        }
        return vector<int>(nums.begin(), nums.begin() + result);
    }
};