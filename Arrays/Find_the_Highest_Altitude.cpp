class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int result = 0, current = 0, size = gain.size();
        for (int i = 0; i < size; i++) {
            current += gain[i];
            result = max(result, current);
        }
        return result;
    }
};