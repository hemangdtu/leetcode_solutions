class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b = 0 , a = 0 , l = 0 , o = 0 , n = 0;
        
        for(auto &chr : text)
            switch(chr)
            {
                case 'b' : b++;
                    break;
                case 'a' : a++;
                    break;
                case 'l' : l++;
                    break;
                case 'o' : o++;
                    break;
                case 'n' : n++;
                    break;
            }
        
        l /= 2;
        o /= 2;
        
        return min({b , a , l , o , n});
    }
};