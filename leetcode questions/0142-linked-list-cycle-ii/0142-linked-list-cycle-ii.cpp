class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head ->next ==NULL)
        {
            return NULL;
        }

        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *entry = head;

        while(fast->next && fast ->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)       //find the collision node
            {
                while(slow != entry)   //find the starting point of cycle
                {
                    slow = slow->next;
                    entry = entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }
};