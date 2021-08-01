// Solution - 1

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> resultIndex;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            for(int j = i+1; j<nums.size(); j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    resultIndex.push_back(i);
                    resultIndex.push_back(j);
                    return resultIndex;
                }
            }
        }
        return resultIndex;
    }
};


// Solution - 2

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int> values;
        vector<int> result;
        
        for(int i = 0; i<nums.size(); i++)
        {
            int reqVal = target - nums[i];
            if(values.find(reqVal) != values.end())
            {
                auto it = find(nums.begin(), nums.end(), reqVal);
                if (it != nums.end())
                    return {i, int(it - nums.begin())};
            }
            values.insert(nums[i]);
        }
        return {};
    }
};