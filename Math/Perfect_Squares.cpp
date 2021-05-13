class Solution {
public:
    int numSquares(int n) {
        static vector<int> num{0};
        while (num.size() <= n)
        {
            int squares = INT_MAX;
            for (int i = 1; i * i <= num.size(); ++i)
                squares = min(squares, num[num.size() - i * i] + 1);
            num.push_back(squares);
        }
        return num[n];
    }
};