class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        int i = 0, j = 0;
        int maxLen = 1, beginEmp = 0, endEmp = 0;
        while(i<n)
        {
            while(i<n && seats[i] != 0) i++;
            j = i;
            while(j<n && seats[j] == 0) j++;
            maxLen = max(maxLen,j-i);
            i = j;
        }
        i = 0;
        while(i < n && seats[i] == 0) i++;
        beginEmp=i;
        i = n-1;
        while(i >= 0 && seats[i] == 0) i--;
        endEmp = n-1-i;
        int ans = 1;
        int beginEnd = max(beginEmp, endEmp);
        ans=max(ans, max(beginEnd, (maxLen+1)/2));
        return ans;
    }
};