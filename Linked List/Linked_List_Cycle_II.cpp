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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head, *start = head;
        while(fast && fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast)
            {
                while(slow && start && slow != start)
                {
                    slow = slow -> next;
                    start = start -> next;
                }
                return start;
            }
        }
        return NULL;
    }
};