class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> result;
        for (auto& op : ops)
        {
            if (op == "+")
                result.push_back(result[result.size() - 2] + result.back());
            else if (op == "D")
                result.push_back(2 * result.back());
            else if (op == "C")
                result.pop_back();
            else
                result.push_back(stoi(op));
        }
        int sum = 0;
        for(auto& it : result)
            sum += it;
        return sum;
    }
};