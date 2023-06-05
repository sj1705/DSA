class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {        
        ListNode* p = head;

        ListNode oddList(0),  *pOdd = &oddList;
        ListNode evenList(0), *pEven = &evenList;        
        
        int cnt = 0;
        while(p){
            if(cnt%2 == 0){
                pOdd->next = p;
                pOdd = p;        
            }else{
                pEven->next = p;
                pEven = p;
            }
            p=p->next;
            cnt++;
        }
        
        if(cnt > 1){
            pOdd->next = evenList.next;
            pEven->next=nullptr;
        }else{
            pOdd->next=nullptr;
        }
        
        return oddList.next;
    }
};