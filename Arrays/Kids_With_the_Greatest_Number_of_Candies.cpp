class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int& maxCandies = *max_element(candies.begin(), candies.end());
        vector<bool> maxCandyCondition;
        for(auto it : candies)
        {
            if(it + extraCandies >= maxCandies)
                maxCandyCondition.push_back(true);
            else
                maxCandyCondition.push_back(false);
        }
        return maxCandyCondition;
    }
};