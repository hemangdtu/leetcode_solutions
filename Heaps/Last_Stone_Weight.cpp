class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> max_heap;
        int size = stones.size();
        
        for (int i = 0; i<size; i++)
            max_heap.emplace(stones[i]);
        
        for (int i = 0; i + 1 < stones.size(); ++i)
        {
            int w1 = max_heap.top();
            max_heap.pop();
            int w2 = max_heap.top();
            max_heap.pop();
            max_heap.emplace(abs(w1 - w2));
        }
        return max_heap.top();
    }
};