#include<bits/stdc++.h>
using namespace std;
   class Node
   {
   public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
   {
       this->val=val;
       this->next=NULL;
       this->prev=NULL;
          }
   };
   void deleteathead(Node *&head,Node *&tail){
    Node* deletenode=head;
    head=deletenode->next;
    delete deletenode;
    if(head==NULL){
        tail=NULL;
        return;
    }
   }
   void printforward(Node *head){
   Node *tmp=head;
   while(tmp!=NULL){
    cout<<tmp->val<<endl;
    tmp=tmp->next;
   }
   }

   int main()
{
   Node *head= new Node(10);
   Node *a=new Node(20);
   Node* tail=new Node(30);
   head->next=a;
   a->prev=head;
   a->next=tail;
   tail->prev=a;
   deleteathead(head,tail);
   printforward(head);
    return 0;
}














