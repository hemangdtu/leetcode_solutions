class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n1 = 0, n2 = 0;
        
        for (auto& val : nums)
        {
            if (val > n1)
            {
                n2 = n1;
                n1 = val;
            }
            else if (val > n2)
                n2 = val;
        }
        
        return (n1 - 1) * (n2 - 1);
    }
};