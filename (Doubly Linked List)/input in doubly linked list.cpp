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
   void insertattail(Node *&head,Node *&tail,int val){//jodi head null hoy tahole tail ar head dutokei change korte hobe .tai *&head

   Node *newnode=new Node(val);
   if(head==NULL){
    head=newnode;
    tail=newnode;
   }
   newnode->prev=tail;
   tail->next=newnode;
   tail=newnode;
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
    int val;
    Node *head=NULL;
    Node *tail=NULL;
    while(1){
     cin>>val;
     if(val==-1){
         break;
     }
   insertattail(head,tail,val);
    }
   printforward(head);
    return 0;
}
















