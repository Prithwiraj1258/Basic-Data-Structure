class Solution {
public:
int size(ListNode *head)
{
  Node *tmp=head;
  int cnt=0;
  while(tmp !=NULL){
    cnt++;
    tmp=tmp->next;
  }
  return cnt;
}
    ListNode* middleNode(ListNode* head) {
         Node *tmp=head;
         int val;
   int sz= size(head);
   for(int i=0;i<=sz/2;i++){
    val=tmp;
    tmp=tmp->next;
   }
    }
    return val;
};
