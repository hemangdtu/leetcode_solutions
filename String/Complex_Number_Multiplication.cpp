class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int ra, ia, rb, ib;
        char op;
        stringstream ssa(num1), ssb(num2);
        ssa >> ra >> op >> ia;
        ssb >> rb >> op >> ib;
        string result = to_string(ra * rb - ia * ib);
        result += "+";
        result += to_string(ra * ib + rb * ia);
        result += "i";
        return result;
    }
};