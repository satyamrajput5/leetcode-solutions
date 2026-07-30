// Last updated: 31/07/2026, 02:45:20
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

        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;

        int carry = 0;

        ListNode* curr1 = l1;
        ListNode* curr2 = l2;

        while (curr1 || curr2 || carry) {

            int val1;
            int val2;

            if (curr1) {
                val1 = curr1->val;
            }
            else {
                val1 = 0;
            }

            if (curr2) {
                val2 = curr2->val;
            }
            else {
                val2 = 0;
            }

            int sum = val1 + val2 + carry;

            curr->next = new ListNode(sum % 10);

            curr = curr->next;

            carry = sum / 10;

            if (curr1) {
                curr1 = curr1->next;
            }

            if (curr2) {
                curr2 = curr2->next;
            }
        }

        return dummy->next;
    }
};