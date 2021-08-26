class Solution {
public:
    bool isValidSerialization(string preorder) {
        int diff = 1;
        preorder.push_back(',');
        for(int i = 1; i < preorder.size(); i++)
        {
            if(preorder[i] == ',')
            {
                diff--;
                if(diff < 0)
                    return false;
                if(preorder[i - 1] != '#')
                    diff += 2;
            }
        }
        return diff == 0;
    }
};