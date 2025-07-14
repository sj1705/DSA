class Solution {
public:
    int getDecimalValue(ListNode* head) 
    {
    int k=0;
    while(head)
    {
    k=k*2+head->val;
    head=head->next;
    }
    return k;
}
};
