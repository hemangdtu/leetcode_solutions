class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> result(1,first);
        int size = encoded.size();
        
        for(int i=0; i<size; i++)
            result.push_back(encoded[i] ^ result[i]);
        
        return result;
    }
};