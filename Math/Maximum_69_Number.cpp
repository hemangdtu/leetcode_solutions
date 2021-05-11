class Solution {
public:
    int maximum69Number (int num) {
        int result = 0;
        for (int curr = num, base = 3; curr; base *= 10, curr /= 10)
            if (curr % 10 == 6)
                result = base;
        return num + result;
    }
};