class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares;
        int size = nums.size();
        for(int i = 0; i<size; i++)
            squares.push_back(pow(nums[i], 2));
        sort(squares.begin(), squares.end());
        return squares;
    }
};