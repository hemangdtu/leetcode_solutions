class Solution {
public:
    string addBinary(string a, string b) {
        int s = 0;
        int i = a.size() - 1, j = b.size() - 1;
        string result = "";
        while (i >= 0 || j >= 0 || s == 1)
        {
            s = s + ((i >= 0)? a[i--] - '0': 0);
            s = s + ((j >= 0)? b[j--] - '0': 0);
            result = char(s % 2 + '0') + result;
            s /= 2;
        }
        return result;
    }
};