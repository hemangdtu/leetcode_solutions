class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int onesCount=0;
        if(bits.size()==1)
            return true;
        for(int i=bits.size()-2;i>=0;i--){
            if(bits[i]==0)
                break;
            onesCount++;
        }
        if(onesCount%2==0)
            return true;
        return false;
    }
};