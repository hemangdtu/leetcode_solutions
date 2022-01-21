class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int remainingGasUnit = 0, currGasUnit = 0, start = 0;
        for(int i = 0; i<gas.size(); i++)
        {
            currGasUnit += gas[i]-cost[i];
            if(currGasUnit<0)
            {
                start = (i+1) % gas.size();
                currGasUnit = 0;
            }
            remainingGasUnit += gas[i]-cost[i];
        }
        return (remainingGasUnit >= 0) ? start : -1;
    }
};