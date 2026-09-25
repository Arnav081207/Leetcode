class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode* slow = head;
        ListNode* fast = head;

        // Phase 1: detect whether a cycle exists
        while (fast != nullptr && fast->next != nullptr) {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                break;
            }
        }

        // No cycle
        if (fast == nullptr || fast->next == nullptr) {
            return nullptr;
        }

        // Phase 2: find the starting node of cycle
        slow = head;

        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};