class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k == nums.size()) return;
        else if(k < 0) k = k+nums.size();
        else if(k > nums.size()) k = k% nums.size();
        reverse(nums.begin(), nums.end() - k);
        reverse(nums.end() - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};