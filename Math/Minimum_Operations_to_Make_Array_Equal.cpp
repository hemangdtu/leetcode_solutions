class Solution {
public:
    int minOperations(int n) {
        int result = 0;
        if(n%2 == 0)
            for(int i=1; i<=(n/2); i++)
                result += (2*i)-1;
        else
            for(int i=1; i<=(n/2); i++)
                result += 2*i;
        return result;
    }
};