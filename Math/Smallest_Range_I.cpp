class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
         return max(0, *max_element(nums.cbegin(), nums.cend()) - *min_element(nums.cbegin(), nums.cend())-2 * k);
    }
};