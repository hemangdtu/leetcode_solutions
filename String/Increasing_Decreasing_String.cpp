class Solution {
public:
    string sortString(string s) {
        string result;
        int frequency[26] = {0};
        int size = s.size();
        for(int i = 0; i<size; i++)
            frequency[s[i] - 'a']++;
        while(result.size() != size)
        {
            for(int i = 0; i<26; i++)
            {
                if(frequency[i] > 0)
                {
                    result += 'a' + i;
                    frequency[i]--;
                }
            }
            for(int i = 25; i>=0; i--)
            {
                if(frequency[i] > 0)
                {
                    result += 'a' + i;
                    frequency[i]--;
                }
            }
        }
        return result;
    }
};