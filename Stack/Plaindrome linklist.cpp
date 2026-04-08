class Solution {
public:
    void insertattail(Node *&head,Node *&tail,int val){
        Node *newnode=new Node(val);
    if(head==NULL){
       head=newnode;
       tail=newnode;
       return;
    }
    tail->next=newnode;
    tail=newnode;
    }
    void reverse1(Node *&head,Node *tmp){
    if(tmp->next=NULL){
        head=tmp;
        return;
    }
    tmp->next->next=tmp;
    tmp->next=NULL;
    }

    bool isPalindrome(Node* head){
    Node *newhead=NULL;
    Node *newtail=NULL;
    Node *temp=head;
    while(tmp !=NULL){
        insertattail(newhead,newtail,tmp->val);
        tmp=tmp->next;
    }
   reverse1(head,head);
    tmp = head;
        ListNode* tmp2 = newhead;
        while(tmp!=NULL){
            if(tmp->val != tmp2->val){
                return false;
            }
            tmp=tmp->next;
            tmp2=tmp2->next;
        }
}
};
