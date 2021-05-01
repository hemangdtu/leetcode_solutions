class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int extra=0;
        for(int i=num.size()-1;i>=0;i--)
        {
            extra+=k%10;
            k=k/10;
            int temp=num[i];
            num[i]=(num[i]+extra)%10;
            extra=(extra+temp)/10;
        }
        while(k)
        {
            extra+=k%10;
            k=k/10;
            num.insert(num.begin(),extra%10);
            extra=extra/10;
        }
        if(extra)
            num.insert(num.begin(),extra);
        return num;
    }
};