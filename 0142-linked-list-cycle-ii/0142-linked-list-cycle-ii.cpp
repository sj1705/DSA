class Solution {
public:
    ListNode * detectCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        ListNode *p=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

            if (fast == slow) {
                while (p != slow) {
                    p = p->next;
                    slow = slow->next;
                }
                return p;
            }
        }
        return NULL;
    }
};