class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<pair<int,int>> goodPairs;
        for (int i = 0; i < nums.size()-1; i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j])
                {
                    goodPairs.push_back(make_pair(i, j));
                }
            }
        }
        return goodPairs.size();
    }
};