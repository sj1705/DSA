class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
           return false;
        ListNode *f = head;
        ListNode *slow = head;
        while(f->next != NULL && f->next->next != NULL)
        {
            slow = slow->next;
            f = f->next->next;
            if(f == slow)
                return true;
        }
        return false;    
    }
};