class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<string> stk;
        int i = 0, ans = 0;
        
        while (i < s.length())
        {
            if (s[i] == '(')
                stk.push("(");
            else
            {
                if (stk.top() == "(")
                {
                    stk.pop();
                    stk.push("1");
                }
                else
                {
                    long long count = 0;
                    while (stk.top() != "(")
                    {
                        count += stoi(stk.top());
                        stk.pop();
                    }
                    stk.pop();
                    stk.push(to_string(2 * count));
                }
            }
            i++;
        }
        
        while (!stk.empty())
        {
            ans += stoi(stk.top());
            stk.pop();
        }
        return ans;
    }
};