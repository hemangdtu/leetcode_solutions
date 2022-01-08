/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    ListNode* node;
    
public:
    Solution(ListNode* head) {
        node = head;
    }
    
    int getRandom() {
        ListNode* h = node;
        int k = 0, x = 0;
        while(h)
        {
            k++;
            int r = rand()%k;
            if(r == 0) x = h -> val;
            h = h -> next;
        }
        return x;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */