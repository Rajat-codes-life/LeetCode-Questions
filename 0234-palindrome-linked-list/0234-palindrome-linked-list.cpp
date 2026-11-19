
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        // Step 1: Find the middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half
        ListNode* prev = NULL;
        ListNode* curr = slow;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;

            curr->next = prev;

            prev = curr;
            curr = nextNode;
        }

        // Step 3: Compare both halves
        ListNode* left = head;
        ListNode* right = prev;

        while (right != NULL) {

            if (left->val != right->val) {
                return false;
            }

            left = left->next;
            right = right->next;
        }

        return true;
    }
};
