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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* ref = result;
        int carry = 0;
        while(l1 || l2)
        {
            int val1 = (l1 != NULL) ? l1 -> val : 0;
            int val2 = (l2 != NULL) ? l2 -> val : 0;
            
            int sum = val1 + val2 + carry;
            carry = sum / 10;
            int digit = sum % 10;
            
            ListNode* newVar = new ListNode(digit);
            result -> next = newVar;
            
            l1 = (l1 != NULL) ? l1 -> next : NULL;
            l2 = (l2 != NULL) ? l2 -> next : NULL;
            result = result -> next;
        }
        if(carry > 0)
        {
            ListNode* newVar = new ListNode(carry);
            result -> next = newVar;
            result = result -> next;
        }
        return ref -> next;
    }
};