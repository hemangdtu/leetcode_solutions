class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxEle=-1, size = arr.size();
        int val;
        for(int i = size-1;i>=0;i--)
        {
            val = arr[i];
            arr[i] = maxEle;
            maxEle = max(maxEle, val);
        }
        return arr;
    }
};