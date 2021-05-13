class Solution {
public:
    vector<int> countBits(int num) {
        if(num == 0)
            return {0};
        if(num == 1)
            return {0, 1};
        vector<int> result;
        result.push_back(0);
        result.push_back(1);
        for(int i = 2; i<=num; i++)
            if(i % 2 == 0)
                result.push_back(result[i/2]);
            else
                result.push_back(result[i/2] + 1);
        return result;
    }
};