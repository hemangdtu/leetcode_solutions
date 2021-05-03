class Solution {
public:
    int arraySign(vector<int>& nums) {
        int flag = 0;
        for (auto &it : nums)
        {
            if (it == 0)
                return 0;
            if (it < 0)
                flag ^= 1;
        }
        return flag % 2 ? -1 : 1;
    }
};