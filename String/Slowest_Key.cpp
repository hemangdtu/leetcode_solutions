class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        releaseTimes.insert(releaseTimes.begin(), 0);
        char result;
        int duration = INT_MIN;
        for(int i=1; i<releaseTimes.size(); i++)
        {
            if(releaseTimes[i] - releaseTimes[i-1] > duration ||
               (releaseTimes[i] - releaseTimes[i-1] == duration &&
                result < keysPressed[i-1]))
            {
                duration = releaseTimes[i] - releaseTimes[i-1];
                result = keysPressed[i-1];
            }
        }
        return result;
    }
};