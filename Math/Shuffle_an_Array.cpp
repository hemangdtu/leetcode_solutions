class Solution {
private:
    vector<int> originalNums;
    int size;
    
public:
    Solution(vector<int>& nums) {
        this->originalNums = nums;
        size = nums.size();
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return originalNums;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> ShuffleNums(originalNums);
        for(int i = 0; i < size; i++)
            swap(ShuffleNums[i], ShuffleNums[i + rand() % (size - i)]);
        return ShuffleNums;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */