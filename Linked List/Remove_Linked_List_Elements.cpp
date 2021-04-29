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
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* ref = new ListNode(0);
        ListNode* p = ref;
        ref -> next = head;
        while(p -> next != NULL){
            if(p -> next -> val == val)
                p -> next = p -> next -> next;
            else
                p = p -> next;
        }
        return ref -> next;
    }
};