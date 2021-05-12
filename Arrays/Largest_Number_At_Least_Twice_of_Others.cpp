class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int size = nums.size();
        auto maxVal = max_element(nums.begin(), nums.end());
        int maxValIndex = distance(nums.begin(), maxVal);
        
        for (int i = 0; i < nums.size(); ++i)
            if (i != maxValIndex && 2 * nums[i] > nums[maxValIndex])
                return -1;
        
        return maxValIndex;
    }
};