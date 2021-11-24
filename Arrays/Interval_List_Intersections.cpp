class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int sf = firstList.size(), ss = secondList.size();
        vector<vector<int>> result;
        int i = 0, j = 0;
        while(i < sf  && j < ss)
        {
            int x = max(firstList[i][0], secondList[j][0]);
            int y = min(firstList[i][1], secondList[j][1]);
            if(x <= y) result.push_back({x, y});
            if(firstList[i][1] <= secondList[j][1]) i++;
            else j++;
        }
        return result;
    }
};