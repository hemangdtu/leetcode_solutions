class Solution {
private:
    int count, numDigits, digitN;
    string nStr;
    
    void dfs(int pos,vector<string>& digits)
    {
        if(pos == digitN)
        {
            count++;
            return;
        }
        for(string d : digits)
        {
            if('0'+stoi(d) < nStr[pos]) count += pow(numDigits, digitN-pos-1);
            else if('0'+stoi(d) == nStr[pos]) dfs(pos+1, digits);
        }
    }
    
public:
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        numDigits = digits.size();
        nStr = to_string(n);
        digitN = nStr.size();
        for(int i=1; i<=digitN-1; i++) count += pow(numDigits, i);
        dfs(0, digits);
        return count;
    }
};