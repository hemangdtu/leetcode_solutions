class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0, maxS = INT_MIN, minS = INT_MAX, len = salary.size();
        for(int pay : salary)
        {
            sum += pay;
            maxS = pay > maxS ? pay : maxS;
            minS = pay < minS ? pay : minS;
        }
        return ( sum - maxS - minS ) / ( len - 2 );
    }
};