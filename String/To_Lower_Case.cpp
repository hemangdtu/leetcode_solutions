class Solution {
public:
    string toLowerCase(string str) {
        int size = str.size();
        int diff = int('a') - int('A');
        for(int i = 0; i<size; i++)
            if(str[i] <= int('Z') && str[i] >= int('A'))
                str[i] += diff;
        return str;
    }
};