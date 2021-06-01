class Solution {
public:
    int maxDepth(string s) {
        int result = 0,ctr = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
                ctr++;
            else if(s[i] == ')')
                ctr--;
            result = result>ctr ? result : ctr;
        }
        return result;
    }
};