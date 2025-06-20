
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* next;
        ListNode* temp=head;
        while(head && head->next)
        {
            next=head->next->next;
            swap(head->val,head->next->val);
            head=next;
        }

        return temp;
    }
};