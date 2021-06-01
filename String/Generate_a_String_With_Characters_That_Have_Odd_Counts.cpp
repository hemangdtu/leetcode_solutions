class Solution {
public:
    string generateTheString(int n) {
        string result;
        if(n%2 == 0)
        {
            for(int i = 0; i<n-1; i++)
                result.push_back('a');
            result.push_back('b');
        }
        else
            for(int i = 0; i<n; i++)
                result.push_back('a');
        return result;
    }
};