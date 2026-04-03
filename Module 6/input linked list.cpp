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
      Node* newnode=new Node(val);
      if(head==NULL)
      {
          head=newnode;
          tail=newnode;
      }
      tail->next=newnode;



    }
      void print(Node *head)
      {
          Node *temp=head;
          while(temp!=NULL)
          {
              cout<<temp->val<<" ";
              temp=temp->next;
          }
      }
   int main()
{
   Node *head=NULL;
   Node *tail=NULL;
    int val ;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insertattail(head,tail,val);
    }

    print(head);
    return 0;
}












