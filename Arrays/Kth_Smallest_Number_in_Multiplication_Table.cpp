class Solution {
private:
    int helper(int m, int n, int mid)
    {
        int count = 0;
        for(int i = 1; i<=m; i++) count += min(n, mid/i);
        return count;
    }
    
public:
    int findKthNumber(int m, int n, int k) {
        int left = 1 , right = m * n, count  = 0, mid = left + (right - left)/2 ;
        while(left < right)
        {
            mid = left + (right - left)/2;
            count = helper(m, n, mid);
            if(count < k) left = mid+1;
            else right = mid;
        }
        return right;
    }
};