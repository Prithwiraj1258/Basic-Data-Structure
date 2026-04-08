class Solution {
public:
    void reverse1(ListNode *&head,ListNode*temp){
    if(tmp->next==NULL){
            head=tmp;
        return;
    }
    tmp->next->next=tmp;
    tmp=NULL;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        reverse1(head,head);
        return head;
    }
};
