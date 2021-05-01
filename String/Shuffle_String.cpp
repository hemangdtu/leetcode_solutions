class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res = s;
        int size = indices.size();
        for(int i =0; i < size; ++i)
            res[indices[i]] = s[i];
        return res;
    }
};