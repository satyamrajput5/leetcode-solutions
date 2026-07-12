// Last updated: 12/07/2026, 18:00:53
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* end = head;
        ListNode* curr = head;
        int count = 1;
        int excount = 1;

        while(end->next != nullptr){
            end = end->next;
            count++;
        }

        if (count == n) return head->next;
        
        while(count - excount != n){
            curr = curr->next;
            excount++;
        }
        curr->next = curr->next->next;

        return head;
    }
};
