class Solution {
public:
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        int m = words.size(), n = puzzles.size();
        unordered_map<int, int> wordCount;
        for(auto& word : words)
        {
            int count = 0, bitmask = 0;
            for(char ch : word)
                if(((1 << (ch - 'a')) & bitmask) == 0)
                {
                    bitmask += (1 << (ch - 'a'));
                    ++count;
                }
            if(count <= 7) ++wordCount[bitmask];
        }
        vector<int> ans(n);
        for(int i = 0; i < n; i++)
        {
            auto& puzzle = puzzles[i];
            int bitmask = 0;
            for(char ch : puzzle)
                bitmask += (1 << (ch - 'a'));
            int firstLetter = (1 << (puzzle[0] - 'a'));
            for(int subset = bitmask; subset > 0; subset = ((subset - 1) & bitmask))
                if ((subset & firstLetter) != 0 && wordCount.find(subset) != wordCount.end())
                    ans[i] += wordCount[subset];
        }
        return ans;
    }
};