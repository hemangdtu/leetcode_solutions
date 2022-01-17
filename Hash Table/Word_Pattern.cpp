class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int i = 0, n = s.length();
        vector<string> m(26, "");
        unordered_map<string, char> table;
        for(char c : pattern)
        {
            string w = "";
            while(i < n && s[i] != ' ') w += s[i++];
            if(w == "") return false;
            if((m[c-'a']!="" && m[c-'a'] != w) || (table.count(w) > 0 && table[w] != c)) return false;
            m[c-'a'] = w;
            table[w] = c;
            i++;
        }
        return i >= n;
    }
};