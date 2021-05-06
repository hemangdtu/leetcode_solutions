class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();
        for(int i = 2; i<size; i++)
            cost[i] = cost[i] + min(cost[i-1], cost[i-2]);
        return min(cost[size-1], cost[size-2]);
    }
};