class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //return the head of list2 if list1 does not exist
        if(list1==NULL)
            return list2;
        //return the head of list1 if list2 does not exist
        if(list2==NULL)
            return list1;

        if(list1->val <= list2->val){
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else{
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};