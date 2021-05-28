class Solution {
public:    
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(), tasks.end(), [](const auto& a, const auto& b) {
            return a[1] - a[0] < b[1] - b[0];
        });
        int result = 0;
        for (auto& i : tasks)
            result = max(result + i[0], i[1]);
        return result;
    }
};