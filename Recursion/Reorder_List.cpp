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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        while(head)
        {
            ListNode* temp = head -> next;
            head -> next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }
    
public:
    void reorderList(ListNode* head) {
        if(!head) return;
        ListNode* fast = head, *slow = head;
        while(fast && fast -> next)
        {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        auto right = reverse(slow), left = head;
        while(left && right)
        {
            ListNode* temp = left -> next;
            left -> next = right;
            left = temp;
            temp = right -> next;
            right -> next = left;
            right = temp;
        }
        if(left) left -> next = NULL;
    }
};