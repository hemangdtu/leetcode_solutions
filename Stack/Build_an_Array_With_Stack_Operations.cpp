class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        int targetSize = target.size();
        int counter = 0, i;
        for(i = 1; i<n && i <= target[targetSize - 1]; i++)
            if(i == target[counter])
            {
                result.push_back("Push");
                counter++;
            }
            else
            {
                result.push_back("Push");
                result.push_back("Pop");
            }
        if(i==target[targetSize - 1])
            result.push_back("Push");
        return result;
    }
};