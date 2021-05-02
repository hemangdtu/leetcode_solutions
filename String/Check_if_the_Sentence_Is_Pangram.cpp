class Solution {
public:
    bool checkIfPangram(string sentence) {
        int count = 0, size = sentence.size();
        sort(sentence.begin(), sentence.end());
        for(int i = 0; i<size; i++)
        {
            if(sentence[i] != sentence[i+1])
                count++;
        }
        return count == 26;
    }
};