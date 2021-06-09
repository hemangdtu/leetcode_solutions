class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> count;
        for (int i = 1; i <= n; i++)
        {
            int total = 0;
            for (int j = i; j; j /= 10)
                total += j % 10;
            count[total]++;
        }
        auto& max_count = max_element(count.begin(), count.end(),
                                            [](const auto& a, const auto& b) {
                                                return a.second < b.second;
                                            })->second;
        int result = 0;
        for (auto& [_, v]: count)
            if (v == max_count)
                result++;
        return result;
    }
};