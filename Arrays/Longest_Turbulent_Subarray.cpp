class Solution {
private:
    bool isPosL(vector<int>&arr, int ind, int low)
    {
        bool res = true;
        if(ind-2 >= low)
            return (arr[ind-1] > arr[ind] && arr[ind-1] > arr[ind-2]) ||(arr[ind-1] < arr[ind] && arr[ind-1] < arr[ind-2]);
        else
            return ind>low ? arr[ind] != arr[ind-1] : true;
        return res;
    }
    
public:
    int maxTurbulenceSize(vector<int>& arr) {
        if(arr.size() == 0 || arr.size() == 1)
            return arr.size();
        int i = 0, j = 0, len = 1;
        while(j<arr.size())
        {
            while(j<arr.size() && isPosL(arr, j, i))
            {
                len = max(len, j-i+1);
                j++;
            }
            if(i!=j-1)
                i = j-1;
            else
                i = j;
        }
        return len;
    }
};