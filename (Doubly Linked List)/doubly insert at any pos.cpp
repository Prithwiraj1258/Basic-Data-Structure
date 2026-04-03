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
   void insertatanypos(Node *&head,int idx,int val){
       Node *newnode=new Node(val);
       Node *tmp=head;
       for(int i=0;i<idx-1;i++){
        tmp=tmp->next;
       }
       newnode->next=tmp->next;
       tmp->next->prev=newnode;
       newnode->prev=tmp;
       tmp->next=newnode;
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
   int val=100;
   int idx=2;
   insertatanypos(head,idx,val);
   printforward(head);
    return 0;
}
















