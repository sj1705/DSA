class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
           return false;
        ListNode *f = head;
        ListNode *s = head;
        while(f->next && f->next ->next)
        {
            f=f->next->next;
            s=s->next;
            if(s==f)
            {
                return true;
            }
        }
        return false;

    }
};