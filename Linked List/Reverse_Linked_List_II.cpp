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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy{0};
        dummy.next = head;

        auto *prev = &dummy;

        for (int i = 0; i < left - 1; i++)
            prev = prev->next;

        auto *head2 = prev;

        prev = prev->next;
        auto *curr = prev->next;

        for (int i = left; i < right; i++)
        {
            prev -> next = curr -> next;
            curr -> next = head2 -> next;
            head2 -> next = curr;
            curr = prev -> next;
        }

        return dummy.next;
    }
};