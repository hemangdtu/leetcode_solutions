class Solution {
public:
    string getPermutation(int n, int k) {
        string result = "";
        for(int i = 1; i <= n; i++)
            result.push_back(i + '0');
        
        while(k-1 != 0)
        {
            next_permutation(result.begin(), result.end());
            k--;
        }
        return result;
    }
};