class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> maxWealth;
        int userSum = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            for (int j = 0; j < accounts[i].size(); j++)
            {
                userSum += accounts[i][j];
            }
            maxWealth.push_back(userSum);
            userSum = 0;
        }
        int& maxAmount = *max_element(maxWealth.begin(), maxWealth.end());
        return maxAmount;
    }
};