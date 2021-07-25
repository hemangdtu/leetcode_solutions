class Solution {
public:
    int findIntegers(int n) {
        string t = "";
        while (n > 0)
        {
            t += (n & 1) == 1 ? "1" : "0";
            n = n >> 1;
        }
        
        vector<int> zero(t.length() , 0), one(t.length(), 0);
        zero[0] = one[0] = 1;
        for (int i = 1; i < t.length(); i++)
        {
            zero[i] = zero[i - 1] + one[i -1];
            one[i] = zero[i - 1];
        }
        
        int res = zero[t.length() - 1] + one[t.length() - 1];
        for (int i = t.length() - 2; i >= 0; i--)
        {
            if (t[i] == '1' && t[i + 1] == '1')
                break;
            if (t[i] == '0' && t[i + 1] == '0')
                res -= one[i];
        }
        return res;
    }
};