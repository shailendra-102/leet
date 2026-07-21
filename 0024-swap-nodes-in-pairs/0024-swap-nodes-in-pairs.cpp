class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* current = &dummy;

        while (current->next && current->next->next) {
            ListNode* first = current->next;
            ListNode* second = current->next->next;
            first->next = second->next;
            second->next = first;
            current->next = second;

            
            current = first;
        }

        return dummy.next;
    }
};