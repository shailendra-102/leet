class Solution {
public:
    ListNode* addTwoNumbers(ListNode* num1, ListNode* num2) {
        ListNode* temp1 = num1;
        ListNode* temp2 = num2;

        ListNode* dummyNode = new ListNode(-1);
        ListNode* curr = dummyNode;

        int carry = 0;

        while (temp1 != nullptr || temp2 != nullptr) {
            int sum = carry;

            if (temp1)
                sum += temp1->val;

            if (temp2)
                sum += temp2->val;

            curr->next = new ListNode(sum % 10);
            curr = curr->next;

            carry = sum / 10;

            if (temp1)
                temp1 = temp1->next;

            if (temp2)
                temp2 = temp2->next;
        }

        if (carry)
            curr->next = new ListNode(carry);

        return dummyNode->next;
    }
};