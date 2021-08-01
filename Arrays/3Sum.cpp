// Solution 1 (ACCEPTED)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        if(n < 3)
            return {};
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n-2; ++i)
            if(i == 0 || nums[i] != nums[i-1])
            {
                int j = i + 1, k = n-1;
                while(j < k)
                {
                    int sum = nums[i] + nums[j] + nums[k];
                    if(sum == 0)
                    {
                        result.push_back({nums[i], nums[j], nums[k]});
                        while(j < k && nums[j] == nums[j+1])
                            j++;
                        while(j < k && nums[k] == nums[k-1])
                            k--;
                        j++;
                        k--;
                    }
                    else if (sum > 0)
                        k--;
                    else
                        j++;
                }
            }
        return result;
    }
};

// Solution 2 (TLE)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3)
            return {};
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size()-2; i++)
        {
            int first = nums[i];
            int start = i + 1;
            int end = nums.size() - 1;
            for(; start<end;)
            {
                if(first + nums[start] + nums[end] == 0)
                {
                    vector<int> val = {first, nums[start++], nums[end--]};
                    if(find(result.begin(), result.end(), val) == result.end())
                        result.push_back(val);
                }
                else if(first + nums[start] + nums[end] < 0) start++;
                else end--;
            }
        }
        return result;
    }
};