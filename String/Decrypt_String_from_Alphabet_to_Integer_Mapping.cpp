class Solution {
private:
    char convert(string str)
    {
        stringstream ss(str);
        int num;
        ss >> num;
        return num+96;
    }
    
public:
    string freqAlphabets(string s) {
        stringstream ss;
        int i=0;
        while(i<s.length()-2)
        {
            char ch;
            if(s[i+2]=='#')
            {
                ch=(char)convert(s.substr(i, 2) );
                i+=2;
            }
            else
                ch=(char)convert(s.substr(i,1));
            i++;
            ss << ch;
        }
        
        while(i<s.length())
        {
            char ch=(char)convert(s.substr(i,1));
            ss << ch;
            i++;
        }
        return ss.str();
    }
};