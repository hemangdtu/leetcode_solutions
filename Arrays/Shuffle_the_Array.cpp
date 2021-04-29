class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffleArray;
        int firstptr = 0, secondptr = n;
        for(int i = 0; i<n; i++)
        {
            shuffleArray.push_back(nums[firstptr + i]);
            shuffleArray.push_back(nums[secondptr + i]);
        }
        return shuffleArray;
    }
};