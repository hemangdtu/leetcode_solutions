class Solution {
private:
    void backtrack(int left, int right, string& tmp, vector<string>& res){
        if( left == 0 && right == 0 )
        {
            res.push_back(tmp);
            return;
        }
        
        if(left == right)
        {
            tmp += '(';
            backtrack(left-1, right, tmp, res);
            tmp.pop_back();
        }
        if(left < right)
        {
            if(left > 0)
            {
                tmp += '(';
                backtrack(left-1, right, tmp, res);
                tmp.pop_back();
            }
            if(right > 0)
            {
                tmp += ')';
                backtrack(left, right-1, tmp, res);
                tmp.pop_back();
            }
        }
    }

public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        int left = n, right = n;
        string tmp;
        backtrack( left, right, tmp, res);
        return res;
    }
};