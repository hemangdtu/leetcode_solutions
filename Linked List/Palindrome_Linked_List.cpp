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
    void reverse_list(ListNode** head_ref){
        ListNode* head = *head_ref;
        ListNode* p = head->next;
        while (p && p->next){
            ListNode* tmp = p->next;
            p->next = p->next->next;
            tmp->next = head->next;
            head->next =tmp;
        }
        *head_ref = head;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* p1 = new ListNode(0);
        p1->next = head;
        ListNode* p2 = p1;
        while(p2 && p2->next){
            p1 = p1->next;
            p2 = p2->next->next;
        }
        reverse_list(&p1);
        p1 = p1->next;
        p2 = head;
        while (p1){
            if (p1->val != p2->val){
                return false;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};