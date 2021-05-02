class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int limit=digits.size()-1;
        while(limit>=0)
        {
            int temp=digits[limit]+1;
            if(temp<10)
            {
                digits[limit]=temp;
                return digits;
            }
            digits[limit]=0;
            limit--;
        }
        if(digits[0]==0)
            digits.insert(digits.begin(),1);
        return digits;
    }
};