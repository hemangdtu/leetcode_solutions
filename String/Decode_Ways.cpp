class Solution {
private: 
    unordered_map<int, int> dict;
    int decodeways(const string& s, int left, int right)
    {
        if(dict.count(left))
            return dict[left];
        if(s[left] == '0')
            return 0;
        if(left >= right)
            return 1;
        int w1 = decodeways(s, left+1, right), w2 = 0;
        int prefix = stoi(s.substr(left,2));
        if(prefix >= 10 && prefix <= 26)
            w2 = decodeways(s, left+2, right);
        dict[left] = w1 + w2;
        return dict[left];
    }
    
public:
    int numDecodings(string s) {
        return decodeways(s, 0, s.length()-1);
    }
};