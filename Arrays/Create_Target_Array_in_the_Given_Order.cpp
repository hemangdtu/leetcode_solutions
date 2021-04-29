class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> targetArray;
        int size = nums.size();
        targetArray.reserve(size);
        for(int i = 0; i<size; i++)
            targetArray.insert(targetArray.begin() + index[i], nums[i]);
        return targetArray;
    }
};