class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) {
            return head;
        }

        int len = 1;
        ListNode* tail = head;

        while (tail->next) {
            tail = tail->next;
            len++;
        }

        k = k % len;

        if (k == 0) {
            return head;
        }

        tail->next = head;

        int steps = len - k;
        ListNode* temp = head;

        for (int i = 1; i < steps; i++) {
            temp = temp->next;
        }

        ListNode* newHead = temp->next;
        temp->next = NULL;

        return newHead;
    }
};