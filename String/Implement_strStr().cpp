class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystackSize = haystack.size();
        int needleSize = needle.size();
        for (int i = 0; i+needleSize-1 < haystackSize; i++)
            if (haystack.substr(i, needleSize) == needle)
                return i;
        return -1;
    }
};