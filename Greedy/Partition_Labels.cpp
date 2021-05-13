class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> lastOccurence(26, 0);
        int length = s.length();
        for(int i = 0; i<length; i++)
            lastOccurence[s[i] - 'a'] = i;
        int start = 0, end = 0;
        vector<int> result;
        for(int i = 0; i<length; i++)
        {
            if(end < lastOccurence[s[i] - 'a'])
                end = lastOccurence[s[i] - 'a'];
            if(i == end)
            {
                result.push_back(i - start + 1);
                start = i + 1;
            }
        }
        return result;
    }
};