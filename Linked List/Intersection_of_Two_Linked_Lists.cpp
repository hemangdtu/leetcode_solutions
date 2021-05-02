/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void moveHead(ListNode*&head, int val)
    {
        int count = 0;
        while(count < val)
        {
            count++;
            head = head -> next;
        }
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* fakeA = headA;
        ListNode* fakeB = headB;
        int lA = 0, lB = 0;
        while(fakeA || fakeB)
        {
            if(fakeA)
            {
                lA++;
                fakeA = fakeA -> next;
            }
            if(fakeB)
            {
                lB++;
                fakeB = fakeB -> next;
            }
        }
        
        if(fakeA != fakeB)
            return NULL;
        
        fakeA = headA;
        fakeB = headB;
        
        int diff = abs(lA - lB);
        
        if(lA > lB)
            moveHead(fakeA, diff);
        else
            moveHead(fakeB, diff);
        
        while(fakeA != fakeB)
        {
            fakeA = fakeA -> next;
            fakeB = fakeB -> next;
        }
        return fakeA;
    }
};