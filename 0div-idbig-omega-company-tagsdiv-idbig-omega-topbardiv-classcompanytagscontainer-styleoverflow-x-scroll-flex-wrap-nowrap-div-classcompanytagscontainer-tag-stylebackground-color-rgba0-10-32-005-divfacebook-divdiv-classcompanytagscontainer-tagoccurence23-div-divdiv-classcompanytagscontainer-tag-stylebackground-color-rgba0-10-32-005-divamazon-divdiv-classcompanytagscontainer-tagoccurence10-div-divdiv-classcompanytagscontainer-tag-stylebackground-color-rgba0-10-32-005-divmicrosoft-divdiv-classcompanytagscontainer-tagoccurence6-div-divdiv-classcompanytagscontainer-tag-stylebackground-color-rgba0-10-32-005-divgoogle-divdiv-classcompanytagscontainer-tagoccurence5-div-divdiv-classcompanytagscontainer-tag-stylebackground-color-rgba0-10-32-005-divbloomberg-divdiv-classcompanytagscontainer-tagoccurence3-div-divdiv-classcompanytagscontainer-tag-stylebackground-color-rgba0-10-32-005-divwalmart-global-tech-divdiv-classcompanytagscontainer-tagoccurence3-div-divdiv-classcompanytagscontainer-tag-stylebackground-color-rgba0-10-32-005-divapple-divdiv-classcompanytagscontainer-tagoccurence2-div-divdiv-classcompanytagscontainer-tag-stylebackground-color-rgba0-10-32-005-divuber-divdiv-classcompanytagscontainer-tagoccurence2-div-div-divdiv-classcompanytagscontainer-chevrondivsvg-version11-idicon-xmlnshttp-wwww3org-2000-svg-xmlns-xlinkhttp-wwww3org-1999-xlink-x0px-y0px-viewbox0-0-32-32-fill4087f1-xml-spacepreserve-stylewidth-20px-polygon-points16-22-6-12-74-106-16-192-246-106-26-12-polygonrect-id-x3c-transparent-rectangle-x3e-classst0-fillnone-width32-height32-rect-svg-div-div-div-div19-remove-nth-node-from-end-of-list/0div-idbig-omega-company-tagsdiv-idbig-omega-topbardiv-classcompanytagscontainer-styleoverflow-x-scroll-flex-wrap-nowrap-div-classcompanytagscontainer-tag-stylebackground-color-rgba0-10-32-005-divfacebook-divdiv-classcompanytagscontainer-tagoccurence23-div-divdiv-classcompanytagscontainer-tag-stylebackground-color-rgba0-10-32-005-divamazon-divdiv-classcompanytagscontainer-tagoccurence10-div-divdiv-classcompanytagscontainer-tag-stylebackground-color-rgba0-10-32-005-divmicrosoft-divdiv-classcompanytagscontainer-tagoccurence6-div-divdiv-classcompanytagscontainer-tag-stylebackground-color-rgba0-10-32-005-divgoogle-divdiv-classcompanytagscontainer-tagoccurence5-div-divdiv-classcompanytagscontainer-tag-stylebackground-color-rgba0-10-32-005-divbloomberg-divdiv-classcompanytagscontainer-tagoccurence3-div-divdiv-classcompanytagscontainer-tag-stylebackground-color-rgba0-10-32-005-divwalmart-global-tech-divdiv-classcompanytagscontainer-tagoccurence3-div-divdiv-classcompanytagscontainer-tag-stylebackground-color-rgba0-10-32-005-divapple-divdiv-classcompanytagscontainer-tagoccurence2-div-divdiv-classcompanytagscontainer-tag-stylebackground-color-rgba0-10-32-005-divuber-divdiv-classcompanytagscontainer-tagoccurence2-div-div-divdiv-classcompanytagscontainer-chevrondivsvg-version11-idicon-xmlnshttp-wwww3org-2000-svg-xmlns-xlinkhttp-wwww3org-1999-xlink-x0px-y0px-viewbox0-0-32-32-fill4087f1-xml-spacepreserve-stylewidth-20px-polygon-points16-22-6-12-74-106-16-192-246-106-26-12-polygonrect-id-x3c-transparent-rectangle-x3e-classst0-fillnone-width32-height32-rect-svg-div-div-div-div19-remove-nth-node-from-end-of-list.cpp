class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head || n <= 0) {
            return head;
        }

        int cnt = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }

        int pos = cnt - n;

        if (pos == 0) 
        {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
        } 
        else if (pos > 0) 
        {
            temp = head;
            for (int i = 0; i < pos - 1; i++) {
                temp = temp->next;
            }

            ListNode* toDelete = temp->next;
            temp->next = toDelete->next;
            delete toDelete;
        }

        return head;
    }
};
