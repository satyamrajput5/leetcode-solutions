// Last updated: 12/07/2026, 18:00:34
class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return;

        ListNode* l1 = head;
        ListNode* l2 = head->next;

        while (l2 != nullptr && l2->next != nullptr) {
            l1 = l1->next;
            l2 = l2->next->next;
        }

        ListNode* curr = l1->next;
        l1->next = nullptr;

        ListNode* prev = nullptr;
        while (curr) {
            ListNode* agla = curr->next;
            curr->next = prev;
            prev = curr;
            curr = agla;
        }

        ListNode* front = head;
        ListNode* back = prev;

        while (front != nullptr && back != nullptr) {
            ListNode* front1 = front->next;
            ListNode* back1 = back->next;

            front->next = back;
            back->next = front1;

            front = front1;
            back = back1;
        }
    }
};