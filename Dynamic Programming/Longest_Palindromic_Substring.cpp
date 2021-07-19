class Solution {
private:
    int get_palindromic_length(int l, int r, string s)
    {
        while(l >= 0 && r < s.length() && s[l] == s[r])
        {
            l--;
            r++;
        }
        return (r - l - 1);
    }
    
public:
    string longestPalindrome(string s) {
        if(s.length() < 2)
            return s;
        int left = 0, length = 0;
        for(int i=0; i<s.length(); i++)
        {
            int cur_len = max( get_palindromic_length(i,i,s), get_palindromic_length(i,i+1,s));
            if(cur_len > length)
            {
                left = i - (cur_len-1)/2;
                length = cur_len;
            }
        }
        return s.substr(left, length);
    }
};