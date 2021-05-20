class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream str(s);
        string temp;
        int n = 0;
        while (str >> temp)
            n = temp.size();
        return n;
    }
};