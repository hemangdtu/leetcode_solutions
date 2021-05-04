class Solution {
public:
    bool buddyStrings(string a, string b) {
        if (a.length() != b.length()) {
            return false;
        }
        vector<int> diff;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
            {
                diff.emplace_back(i);
                if (diff.size() > 2)
                    return false;
            }
        }
        return (diff.empty() && unordered_set<char>(a.begin(), a.end()).size() < a.size()) || (diff.size() == 2 && a[diff[0]] == b[diff[1]] && a[diff[1]] == b[diff[0]]);
    }
};