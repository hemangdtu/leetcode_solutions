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
    ListNode* insertionSortList(ListNode* head) {
        if(!head) return NULL;
        ListNode *tail = head, *curr, *iter;
        while(tail -> next)
        {
            if(tail -> val <= tail -> next -> val)
            {
                tail = tail -> next;
                continue;
            }
            curr = tail -> next;
            tail -> next = curr -> next;
            if (curr -> val < head -> val)
            {
                curr -> next = head;
                head = curr;
                continue;
            }
            iter = head;
            while (iter != tail)
            {
                if (curr -> val < iter -> next -> val)
                {
                    curr -> next = iter -> next;
                    iter -> next = curr;
                    break;
                }
                iter = iter -> next;
            }
        }
        return head;
    }
};