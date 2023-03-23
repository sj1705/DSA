class Solution {
public:
    ListNode* reverseList(ListNode* curr) {
        ListNode* pre = NULL,*next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr= next;
        }
        return pre;
    }
};