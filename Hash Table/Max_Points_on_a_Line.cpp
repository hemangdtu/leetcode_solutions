class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int max_points = 0;
        for(int i = 0; i < points.size(); ++i)
        {
            unordered_map<double, int> slope_count;
            auto& start = points[i];
            int same = 1;
            
            for(int j = i + 1; j < points.size(); ++j)
            {
                auto& end = points[j];
                if(start[0] == end[0] && start[1] == end[1])
                    ++same;
                else
                {
                    auto slope = numeric_limits<double>::max();
                    if(start[0] - end[0] != 0)
                        slope = (start[1] - end[1]) * 1.0 / (start[0] - end[0]);
                    ++slope_count[slope];
                }
            }

            int current_max = same;
            for (auto& kvp : slope_count)
                current_max = max(current_max, kvp.second + same);
            max_points = max(max_points, current_max);
        }

        return max_points;
    }
};