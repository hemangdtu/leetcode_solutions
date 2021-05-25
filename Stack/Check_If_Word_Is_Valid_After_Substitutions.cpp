class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto ch : s)
        {
            if(ch == 'c')
            {
                if(stk.size() < 2)
                    return false;
                if(stk.top() != 'b')
                    return false;
                stk.pop();
                if(stk.top() != 'a')
                    return false;
                stk.pop();
            }
            else
                stk.push(ch);
        }
        return stk.empty();
    }
};