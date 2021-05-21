class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;
        queue<int> q{{1, 2, 3, 4, 5, 6, 7, 8}};
        while (!q.empty())
        {
            int num = q.front();
            q.pop();
            if (num > high)
                continue;
            if (low <= num)
                result.push_back(num);
            if (num % 10 + 1 < 10)
                q.emplace(num * 10 + num % 10 + 1);
        }
        return result;
    }
};