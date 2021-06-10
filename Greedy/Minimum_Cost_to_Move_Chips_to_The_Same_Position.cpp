class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n=0;
        for(int i:position)
            n += (i&1);
        return min(n, (int)position.size() - n);
    }
};