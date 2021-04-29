class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int count = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            for(int j = 0; j<nums.size(); j++)
            {
                if(i!=j && nums[j]<nums[i])
                {
                    count++;
                }
            }
            result.push_back(count);
            count = 0;
        }
        return result;
    }
};