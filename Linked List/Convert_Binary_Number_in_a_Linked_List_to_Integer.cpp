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
    int lengthLinkedList(ListNode* head)
    {
        int len = 0;
        while(head!=NULL)
        {
            len++;
            head = head -> next;
        }
        return len;
    }
    
    int getDecimalValue(ListNode* head) {
        if (head -> next == NULL)
            return head -> val;
        int decimalVal = 0;
        int length = lengthLinkedList(head);
        ListNode* n = head;
        while(length != -1 && n != NULL)
        {
            decimalVal = decimalVal + (n -> val * pow(2, length-1));
            n = n -> next;
            length--;
        }
        return decimalVal;
    }
};