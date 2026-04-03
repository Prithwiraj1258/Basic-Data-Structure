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
   void insertathead(Node *&head,Ndde *&tail,int val){//jodi head null hoy tahole tail ar head dutokei change korte hobe .tai *&tail
   Node *newnode=new Node(val);
   newnode->next=head;
   head->prev=newnode;
   head=newnode;
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
   insertathead(head,tail,val);
   printforward(head);
    return 0;
}














