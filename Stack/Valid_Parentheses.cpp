class Solution {
public:
    bool isValid(string s) {
        stack<char> Stack;
        char ch;
        int length = s.length();
        
        for (int i = 0; i < length; i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                Stack.push(s[i]);
                continue;
            }
            if (Stack.empty())
                return false;
            
            switch (s[i])
            {
                case ')':
                    ch = Stack.top();
                    Stack.pop();
                    if (ch == '{' || ch == '[')
                        return false;
                    break;
                
                case '}':
                    ch = Stack.top();
                    Stack.pop();
                    if (ch == '(' || ch == '[')
                        return false;
                    break;
                
                case ']':
                    ch = Stack.top();
                    Stack.pop();
                    if (ch =='(' || ch == '{')
                        return false;
                    break;
            }
        }
        
        return (Stack.empty());
    }
};