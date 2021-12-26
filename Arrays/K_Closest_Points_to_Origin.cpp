class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, int>> maxh;
        for(int i = 0; i<points.size(); i++)
        {
            int d = (points[i][0] * points[i][0] + points[i][1] * points[i][1]);
            maxh.push({d, i});
            if(maxh.size() > k) maxh.pop();
         }
         while(maxh.size() != 0)
         {
             ans.push_back(points[maxh.top().second]);
             maxh.pop();
         }
         return ans;
    }
};