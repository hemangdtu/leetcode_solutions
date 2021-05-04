class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buyPrice = INT_MAX, maxEle = INT_MIN;
        int size = prices.size();
        if(size == 0)
            return 0;
        for(int i = 0; i < size; i++)
        {
            if(prices[i] < buyPrice)
                buyPrice=prices[i];
            maxEle = max(maxEle, prices[i] - buyPrice);
        }
        return maxEle;
    }
};