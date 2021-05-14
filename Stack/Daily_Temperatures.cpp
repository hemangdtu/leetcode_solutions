class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> result(size);
        stack<int> s;
        for (int i = 0; i < temperatures.size(); ++i)
        {
            while (!s.empty() && temperatures[s.top()] < temperatures[i])
            {
                int idx = s.top();
                s.pop();
                result[idx] = i - idx;
            }
            s.emplace(i);
        }
        return result;
    }
};