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
int count_nodes(Node *root){
   if(root==NULL)
   return 0;
   int l=count_nodes(root->left);
   int r=count_nodes(root->right);
   return l+r+1;
}
int count_depth(Node *root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    return 1;
    int l = count_depth(root->left);
    int r = count_depth(root->right);
    return max(l,r)+1;
}
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root != NULL)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);
        p->left = myleft;
        p->right = myright;
        if (p->left != NULL)
            q.push(p->left);
        if (p->right != NULL)
            q.push(p->right);
    }
    return root;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    Node *root = input_tree();
    int x=count_nodes(root);
   int y= count_depth(root);
   int z=pow(2,y)-1;
   if(x==z)
   cout<<"YES";
   else
   cout<<"NO";
    return 0;
}