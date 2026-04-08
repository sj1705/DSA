/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr= head;
        ListNode *prev= NULL;
        ListNode *next;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* rev=reverseList(slow);

             ListNode* curr = head;
        while(rev->next) {
            ListNode* tempFront= curr->next;
            curr->next= rev;
            
            ListNode* tempBack  = rev->next;
            rev->next= tempFront;
            
            rev= tempBack;
            curr= tempFront;
        }
    }
};