class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        ListNode* head = l1;
        int sum = 0,carry=0;
        int num1=0,num2=0;
        while(ptr1 ||  ptr2){
            if(ptr1){
                num1=ptr1->val;
                ptr1=ptr1->next;
            }
            if(ptr2){
                num2=ptr2->val;
                ptr2=ptr2->next;
            }
            sum=num1+num2+carry;
            carry = sum/10;
            sum = sum%10;
            cout<<sum;
            ListNode* n = new ListNode(sum);
            l1->next=n;
            l1=l1->next;
            num1=0,num2=0,sum=0;
        }
        if(carry){
            ListNode* n = new ListNode(carry);
            l1->next=n;
            l1=l1->next;
        }
        return head->next;
    }
};