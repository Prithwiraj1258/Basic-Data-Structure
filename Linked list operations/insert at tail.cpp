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
   void insertattail(Node *&head,Node *&tail,int val)
    {
      Node *newnode=new Node(val);
      if(head==NULL)
      {
        head=newnode;
        tail=newnode;
        return;
      }
      tail->next=newnode;
      tail=newnode;
    };

          void printlinkedlist(Node *head){
              Node *temp=head;
   while(temp!= NULL)
   {
    cout<<temp->val<<" ";
    temp=temp->next;
   }
    }

   int main()
{
   Node* head =new Node(10);
   Node* a=new Node(20);
   Node* tail=new Node(30);
  head->next=a;
  a->next=tail;
  insertattail(head,tail,100);
  insertattail(head,tail,200);
  printlinkedlist(head);
       return 0;
}











