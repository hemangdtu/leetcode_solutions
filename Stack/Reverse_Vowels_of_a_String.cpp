class Solution {
public:
    string reverseVowels(string s) {
        set<char> vowels={'a','e','i','o','u','A','E','I','O','U'};
        stack<char> stk;
        
        for(char c:s)
            if(vowels.count(c))
                stk.push(c);
        
        for(char& c:s)
            if(vowels.count(c)) 
            {
                c = stk.top();
                stk.pop();
            }
        return s;
    }
};