class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0;
        int typedSize = typed.size();
        int nameSize = name.size();
        for (int j = 0; j < typedSize; j++)
            if (i < nameSize && name[i] == typed[j])
                i++;
            else if (j == 0 || typed[j] != typed[j - 1])
                return false;
        return i == nameSize;
    }
};