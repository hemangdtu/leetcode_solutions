class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result(1);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i)
        {
            int size = result.size();
            for (int j = 0; j < size; ++j)
            {
                result.emplace_back(result[j]);
                result.back().emplace_back(nums[i]);
            }
        }
        return result;
    }
};