class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morseSet = {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
            "....", "..", ".---", "-.-", ".-..", "--", "-.",
            "---", ".--.", "--.-", ".-.", "...", "-", "..-",
            "...-", ".--", "-..-", "-.--", "--.."
        };
        
        unordered_set<string> finalWord;
        for(auto& word : words)
        {
            string code;
            for(auto& ch : word)
                code += morseSet[ch - 'a'];
            
            finalWord.emplace(move(code));
        }
        return finalWord.size();
    }
};