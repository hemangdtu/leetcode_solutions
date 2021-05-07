class Solution {
public:
    string removeOuterParentheses(string S) {
        string result;
        int outerCheck = 1, count = 0, size = S.length();
        for (int i = 0; i<size; i++) {
            if (S[i] == '(' && count++ >= outerCheck)
                result += S[i];
            if (S[i] == ')' && count-- > outerCheck)
                result += S[i];
        }
        return result;
    }
};