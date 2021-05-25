class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stk;
        int count = 0;
        for(auto ch : s)
        {
            if(ch == '(')
                stk.push(ch);
            else
                if(stk.empty())
                    count++;
                else
                    stk.pop();
        }
        return stk.size() + count;
    }
};