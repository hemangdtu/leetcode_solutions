class Solution {
public:
    string countAndSay(int n) {
        string result = "";
        
        if(!n)
            return result;
        
        string str = "1";
        int cnt = 1;
        
        for (int i = 1; i<n; ++i)
        {
            int len = str.length();
            for(int j = 0; j<len; ++j)
            {
                if (j+1 != len && str[j]==str[j+1])
                    ++cnt;
                else
                {
                    result += to_string(cnt) + str[j];
                    cnt = 1;
                }
            }
            str = result;
            result.clear();
        }
        return str;
    }
};