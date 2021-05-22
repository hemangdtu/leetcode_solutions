class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> result(num_people);
        for (int i = 0; candies != 0; i++)
        {
            result[i % num_people] += min(candies, i + 1);
            candies -= min(candies, i + 1);
        }
        return result;
    }
};