class Solution {
public:
    int factor(int n)
    {
        int maxFactor;
        for(int i=1; i<=sqrt(n); i++)
            if(n%i==0)
                maxFactor = i;
        return maxFactor;
    }
    
    vector<int> constructRectangle(int area) {
        int y = factor(area);
        vector<int> result;
        result.push_back(area/y);
        result.push_back(y);
        return result;
    }
};