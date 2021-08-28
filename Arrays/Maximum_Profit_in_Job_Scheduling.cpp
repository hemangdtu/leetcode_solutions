class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<tuple<int, int, int>> jobs;
        for(int i = 0; i < startTime.size(); ++i)
            jobs.emplace_back(endTime[i], startTime[i], profit[i]);
        sort(jobs.begin(), jobs.end());
        vector<pair<int, int>> dp = {{0, 0}};
        for(auto& [e, s, p] : jobs)
        {
            const auto& it = prev(upper_bound(dp.cbegin(), dp.cend(), make_pair(s + 1, 0)));
            if(it->second + p > dp.back().second)
                dp.emplace_back(e, it->second + p);
        }
        return dp.back().second;
    }
};