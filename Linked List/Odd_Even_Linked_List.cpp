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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode* odd_tail = head;
        ListNode* curr = head->next;
        while(curr != NULL && curr->next != NULL)
        {
            ListNode* even_head = odd_tail -> next;
            odd_tail -> next = curr -> next;
            odd_tail = odd_tail -> next;
            curr -> next = odd_tail -> next;
            odd_tail -> next = even_head;
            curr = curr -> next;
        }
        return head;
    }
};