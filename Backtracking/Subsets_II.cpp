class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res = {{}};
        for(int i=0; i<nums.size(); i++)
        {
            int size = res.size();
            for(int j=0; j<size; j++)
            {
                vector<int> tmp = res[j];
                tmp.push_back(nums[i]);
                if( find(res.begin(), res.end(), tmp) == res.end())
                    res.push_back(tmp);
            }
        }
        return res;
    }
};