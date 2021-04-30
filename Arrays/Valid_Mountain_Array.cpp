class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool inc=false;
        bool dec=false;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1] && !dec)
                inc=true;
            else if(arr[i]<=arr[i+1])
            {
                inc=false;
                break;
            }
            else if(arr[i]>arr[i+1] && inc)
                dec=true;
            else if(arr[i]>=arr[i+1])
            {
                dec=false;
                break;
            }
        }
        return inc && dec;
    }
};