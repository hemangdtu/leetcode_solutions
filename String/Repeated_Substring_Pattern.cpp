class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int size = s.size(), i = 1, j = 0;
        vector <int> temp(size);
        while(i < size)
        {
            if(s[i] == s[j])
            {
                temp[i] = j+1;
                i++;
                j++;
             }
            else
            {
                if(j > 0)
                    j = temp[j-1];
                else
                {
                    temp[i] = 0;
                    i++;
                }
            }
        }
        return temp[size - 1] && size % (size - temp[size-1]) == 0;
    }
};