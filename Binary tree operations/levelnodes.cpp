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
vector<int> level_nodes(Node * root,int x){
    vector<int> v;
    queue<pair<Node *, int>> q;
    if (root != NULL)
    {
        q.push({root, 0});
    }
    while(!q.empty()){
        pair<Node*,int>parent=q.front();
        q.pop();
        Node * p=parent.first;
        int level=parent.second;
        if(level==x){
            v.push_back(p->val);
        }
        
        if(p->left)
        q.push({p->left,level+1});
        if (p->right)
            q.push({p->right,level+1});
    }
    return v;
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
    Node *root = input_tree();
    int x;
    cin >> x;
   vector<int>y=level_nodes(root,x);
   if(y.empty())
       cout <<"Invalid";
   for(int i=0;i<y.size();i++){
    cout<<y[i]<<" ";
   }
    return 0;
}