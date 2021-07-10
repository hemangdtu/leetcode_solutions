class Solution {
private:
    bool islegal( int num)
    {
        return ( num>=1 && num <=26 ) ;
    }
    int legal_num ( char a , char b )
    {
        if( a >= '1' && a<='9' )
        {
            int num = 0 ;
            num = num * 10 + a - '0' ;
            if( b >='0' && b<='9' )
            {
                num = num *10 + b-'0';
                if( islegal( num ) )
                    return 1;
                else
                    return 0;
            }
            else
            {
                num *= 10 ;
                int ans = 0 ;
                for( int i=1 ; i<=9 ; i++)
                    if( islegal( num + i ) )
                        ans++;
                return ans ;
            }
        }
        else if( a == '*' )
        {
            if( b>='0' && b<='9' )
            {
                int num = 10 ;
                int ans = 0 ;
                for( int i=1 ; i<= 2 ; i++)
                    if( islegal( num*i + b -'0' ) )
                        ans++;
                return ans ;
            }
            else
            {
                int num = 10 ;
                int ans =0 ;
                for( int i=1;i<=2;i++)
                    for( int j=1; j<=9 ;j++)
                        if( islegal( num*i + j ) )
                            ans++;
                return ans ;
            }
        }
        return 0 ;
    }
    
public:
    int numDecodings(string s) {
        if( s.size() == 0 )
            return 0;
        long long dp[ s.size() ];
        memset( dp , 0 , sizeof( dp ) ) ;
        if( s[0] =='0' )
            dp[0] = 0;
        else if( s[0] == '*' )
            dp[0] = 9;
        else
            dp[0] = 1;
        
        if( s.size() == 1 )
            return dp[0];
        
        if( s[1] == '0' )
            dp[1] = legal_num( s[0] ,s[1] );
        else if( s[1] == '*' )
            dp[1] = dp[0] * 9 + legal_num(s[0] , s[1] );
        else
            dp[1] = dp[0] + legal_num( s[0] , s[1] );
        
        for( int i=2 ; i<s.size() ; i++)
        {
            if( s[i] == '0' )
                dp[i] = dp[i-2] * legal_num( s[i-1] , s[i] ) % 1000000007;
            else if( s[i] =='*' )
                dp[i] = (dp[i-2] * legal_num( s[i-1] , s[i] ) + dp[i-1] * 9 ) % 1000000007;
            else
                dp[i] = (dp[i-2] * legal_num( s[i-1] , s[i] ) + dp[i-1]  ) % 1000000007;
        }
        return dp[s.size()-1];
    }
};