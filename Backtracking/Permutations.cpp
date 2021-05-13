class Solution {
public:
    void helper(vector<int> num, int k, int n, vector<vector<int>>& res){
        if (k == n)
            res.push_back(num);
        else
            for(int i = k; i <= n; i++)
            {
                int tmp = num[k];
                num[k]=num[i];
                num[i]=tmp;
                
                helper(num, k+1, n, res);
                
                tmp = num[k];
                num[k] = num[i];
                num[i] = tmp;
            }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > result;
        int size = nums.size();
        helper(nums, 0, size-1, result);
        return result;
    }
};