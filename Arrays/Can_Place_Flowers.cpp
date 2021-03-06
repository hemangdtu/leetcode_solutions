class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);
        int size = flowerbed.size();
        for(int i = 1; i < size-1; i++)
        {
            if(flowerbed[i-1]+flowerbed[i]+flowerbed[i+1]==0)
            {
                i++;
                n--;
            }
        }
        return n <= 0;
    }
};