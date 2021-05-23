class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> map;
        int count = 0;
        
        for (int i : nums)
            map[i]++;
        
        for (auto it = map.begin(); it != map.end(); it++)
            if (it -> second == 1)
                count += it -> first;
        
        return count;
    }
};