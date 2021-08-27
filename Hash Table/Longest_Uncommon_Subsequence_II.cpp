class Solution {
private:
    bool isSubsequence(string& a, string& b)
    {
        int i = 0;
        for(int j = 0; j < b.length() && i < a.length(); ++j)
            if(a[i] == b[j])
                ++i;
        return i == a.length();
    }
    
public:
    int findLUSlength(vector<string>& strs) {
        sort(strs.begin(), strs.end(),
             [](const string& a, const string& b) { return a.length() > b.length(); });
        bool all_of;
        for(int i = 0; i < strs.size(); ++i)
        {
            all_of = true;
            for(int j = 0; j < strs.size() && strs[j].length() >= strs[i].length(); ++j)
            {
                if(i != j && isSubsequence(strs[i], strs[j]))
                {
                    all_of = false;
                    break;
                }
            }
            if(all_of)
                return strs[i].length();
        }
        return -1;
    }
};