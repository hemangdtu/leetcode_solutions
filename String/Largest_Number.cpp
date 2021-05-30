class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](const int &a, const int &b) {
            return to_string(a) + to_string(b) > to_string(b) + to_string(a);
        });
        
        string max_num;
        for (const auto& i : nums)
            max_num += to_string(i);
        
        if (max_num[0] == '0' && !max_num.empty())
            return "0";

        return max_num;
    }
};