class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int size = arr.size();
        for(int i = 0; i < size-2; i++)
            if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0)
                return true;
        return false;
    }
};