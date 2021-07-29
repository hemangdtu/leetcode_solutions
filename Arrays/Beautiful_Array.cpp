class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> result;
        if(n == 1)
            result.push_back(1);
        else
        {
            vector<int>ve = beautifulArray((n+1)/2);
            int size = ve.size();
            for(int it=0; it<size; it++)
                result.push_back((2 * ve[it]) - 1);
            vector<int> temp = beautifulArray(n/2);
            size = temp.size();
            for(int it=0; it<size; it++)
                result.push_back(2*temp[it]);
        }
        return result;
    }
};