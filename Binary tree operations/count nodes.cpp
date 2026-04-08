#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {

        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin>>val;
    queue<Node *>q;
    Node* root;
    if(val==-1){
        root=NULL;
    }
    else{
        root=new Node(val);
    }
    if(root !=NULL) q.push(root);
    while(!q.empty()){
        Node *p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node *myleft, *myright;
        if(l==-1){
            myleft=NULL;
        }
        else myleft=new Node(l);
        if (r == -1)
        {
            myright = NULL;
        }
        else
            myright = new Node(r);

        p->left=myleft;
        p->right=myright;
        if(p->left!=NULL)q.push(p->left);
        if(p->right!=NULL)q.push(p->right);
    }
    return root;
    }
int count_nodes(Node *root){
    if(root==NULL){
        return 0;
    }
    int l=count_nodes(root->left);
    int r=count_nodes(root->right);
    return r+l+1;
}

int main()
{
    Node *root = input_tree();
   cout<<count_nodes(root);
}
