class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        if(size == 0)
            return 0;
        if(size ==  1)
            return nums[0];
        int n1 = nums[0];
        int n2 = max(n1, nums[1]);
        for(int i = 2; i<size; i++)
        {
            int temp = n2;
            n2 = max(n1 + nums[i], n2);
            n1 = temp;
        }
        return n2;
    }
};