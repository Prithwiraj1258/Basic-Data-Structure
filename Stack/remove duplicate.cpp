lass Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *tmp=head;
         if (head==NULL){
            return head;
         }
        while(tmp->next!=NULL){
          if(tmp->val==tmp->next->val){
            tmp->next=tmp->next->next;
          }
          else{
            tmp=tmp->next;
          }
        }
            return head;
        }
};
