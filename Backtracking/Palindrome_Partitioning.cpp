class Solution {
private:
    void backtrack(string& s,vector<vector<string>>&res,vector<string>&path)
    {
        if(s.size() == 0)
        {
            res.push_back(path);
            return;
        }
        for(int i = 1; i<=s.size(); i++)
        {
            string pre = s.substr(0, i);
            if(isPalindrome(pre))
            {
                path.push_back(pre);
                string tmp = s.substr(i);
                backtrack(tmp, res, path);
                path.pop_back();
            }
        }
    }
    
    bool isPalindrome(string& s)
    {
        if(s.size() == 0) return true;
        int start = 0,end = s.size()-1;
        while(start <= end)
        {
            if(s[start] != s[end]) return false;
            start++, end--;
        }
        return true;
    }
    
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> path;
        backtrack(s, result, path);
        return result;
    }
};