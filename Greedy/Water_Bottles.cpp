class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        if(numExchange > numBottles)
            return numBottles;
        
        int result = numBottles;
        
        while (numBottles >= numExchange) {
            result += numBottles / numExchange;
            numBottles = numBottles / numExchange + numBottles % numExchange;
        }
        return result;
    }
};