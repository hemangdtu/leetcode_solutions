class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> freq;
        int size = arr.size();
        for(int i = 0; i<size; i++)
            if(freq.find(arr[i])==freq.end())
                freq[arr[i]] = 1;
            else
                freq[arr[i]]++;
        map<int, int> b;
        for(auto i : freq)
            if(b.find(i.second) ==  b.end())
                b[i.second] = 1;
            else
                return false;
        return true;
    }
};