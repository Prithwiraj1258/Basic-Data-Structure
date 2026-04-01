#include<bits/stdc++.h>
using namespace std;
   class Node
   {
   public:
    int val;
    Node *next;
    Node(int val)
   {
       this->val=val;
       this->next=NULL;
          }
          };
   void insertattail(Node *&head,int idx,int val){
   Node *newnode=new Node(val);
   Node *tmp=head;
   for(int i=0;i<idx-1;i++){
    tmp=tmp->next;
   }
   newnode->next=tmp->next;
   tmp->next=newnode;
   }
  void printlinkedlist(Node *head)
  {
      Node *tmp=head;
      while(tmp!=NULL){
        cout<<tmp->val<<endl;
       tmp= tmp->next;
      }
  }
   int main()
{
   Node* head =new Node(10);
   Node* a=new Node(20);
   Node* b=new Node(30);
   Node* c=new Node(40);
  head->next=a;
  a->next=b;
  b->next=c;
  insertattail(head,2,100);
  printlinkedlist(head);
       return 0;
}












