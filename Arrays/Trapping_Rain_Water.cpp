class Solution {
public:
    int trap(vector<int>& height) {
        int result = 0, left = 0, right = height.size() - 1, level = 0;
        while (left < right)
        {
            int lower = height[height[left] < height[right] ? left++ : right--];
            level = max(level, lower);
            result += level - lower;
        }
        return result;
    }
};