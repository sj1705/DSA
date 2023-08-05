class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode *,bool>m;
        ListNode* temp=head;

        ListNode* ans=NULL;
        while(temp!=NULL){
            if(m.find(temp) == m.end()){
                m.insert({temp,true});
            }else{
                ans=temp;
                break;
            }
            temp=temp->next;
        }
        return ans;
    }
};