class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int size = nums.size();
        int res = 0;
        int global_mindiff = INT_MAX;
        
        sort( nums.begin(), nums.end());
        
        for(int i = 0; i < size-2; i++)
        {
            if (i > 0 && nums[i] == nums[i-1])
                continue; 
            
            int left = i+1, right = size-1;
            while(left < right)
            {
                int sum = nums[i] + nums[left] + nums[right]; 
                if(sum - target == 0)
                    return target;
                else if(sum - target > 0)
                {
                    int local_mindiff = sum - target;
                    if(local_mindiff < global_mindiff)
                    {
                        global_mindiff = local_mindiff;
                        res = sum;
                    }
                    right--;
                }
                else if(sum - target < 0)
                {
                    int local_mindiff = target - sum;
                    if(local_mindiff < global_mindiff)
                    {
                        global_mindiff = local_mindiff;
                        res = sum;
                    }
                    left++;
                }
            }
        }
        return res;
    }
};