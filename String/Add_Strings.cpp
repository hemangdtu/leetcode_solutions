class Solution {
public:
    string addStrings(string num1, string num2) {
        string result;
        int size1 = size(num1);
        int size2 = size(num2);
        int carry = 0, i = size1-1, j = size2-1;
        for (; i >= 0 || j >= 0 || carry; carry /= 10)
        {
            if (i >= 0)
                carry += num1[i--] - '0';
            if (j >= 0)
                carry += num2[j--] - '0';
            result += to_string(carry % 10);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};