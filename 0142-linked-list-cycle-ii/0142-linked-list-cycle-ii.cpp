class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head or !head->next){
            return NULL;
        }
        
        unordered_map<ListNode *,int> mp;
        ListNode *slow=head;
       
        while(slow!=NULL){
            if(mp.find(slow)!=mp.end()){
                return slow;
            }
            mp[slow]++;
            slow=slow->next;
        }
        return NULL;
    }
};