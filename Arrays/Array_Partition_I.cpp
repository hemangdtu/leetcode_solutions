class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            int minEle = min(nums[i], nums[i+1]);
            sum = sum + minEle;
            i++;
        }
        return sum;
    }
};