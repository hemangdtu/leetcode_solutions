class Solution {
public:
    int myAtoi(string s) {
        int idx = 0;
        long long res = 0;
        while(idx < s.length() && s[idx] == ' ')
            idx++;
        if(idx == s.length())
            return 0;
        int sign = s[idx] == '-' ? -1 : 1;
        if(s[idx] == '+' || s[idx] == '-')
            idx++;
        while(idx < s.length() && isdigit(s[idx]))
        {
            res = res * 10 + sign * ( s[idx++] - '0' );
            res = res > INT_MAX ? INT_MAX : ( res < INT_MIN ? INT_MIN : res );
        }
        return (int)res;
    }
};