class Solution {
public:
    int minPartitions(string n) {
        int result = 0;
        for(auto c : n)
            result = max(result, c - '0');
        return result;
    }
};