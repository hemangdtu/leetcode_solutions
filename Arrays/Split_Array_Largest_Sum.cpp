class Solution {
private:
    bool check(vector<int>& nums, int m, int64_t total) {
        int cnt = 1;
        int curr_sum = 0;
        for (const auto& num : nums)
        {
            curr_sum += num;
            if (curr_sum > total)
            {
                curr_sum = num;
                ++cnt;
            }
        }
        return cnt <= m;
    }
    
public:
    int splitArray(vector<int>& nums, int m) {
        int left = *max_element(cbegin(nums), cend(nums));
        int right = accumulate(cbegin(nums), cend(nums), 0LL);
        while (left <= right)
        {
            const auto mid = left + (right - left) / 2;
            if (check(nums, m, mid))
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }
};