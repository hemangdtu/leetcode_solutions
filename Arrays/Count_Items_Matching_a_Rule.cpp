class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int rKey;
        if(ruleKey == "type")
            rKey = 0;
        else if(ruleKey == "color")
            rKey = 1;
        else if(ruleKey == "name")
            rKey = 2;
        int size = items.size();
        int count = 0;
        for(int i = 0; i<size; i++)
            if(items[i][rKey] == ruleValue)
                count++;
        return count;
    }
};