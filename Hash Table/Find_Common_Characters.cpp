class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map <char , int> finalCount;
        for(char c = 'a' ; c <= 'z' ; ++c)
            finalCount[c] = 100;
        
        unordered_map <char , int> count;
        for(string& word : words)
        {
            count.clear();
            for(char c : word)
                count[c]++;
            for(char c = 'a' ; c <= 'z' ; ++c)
                finalCount[c] = min(finalCount[c] , count[c]);
        }
        
        vector <string> result;
        string temp;
        int times;
        for(char c = 'a' ; c <= 'z' ; ++c)
        {
            times = finalCount[c];
            temp = c;
            while(times--)
                result.push_back(temp);
        }
        return result;
    }
};