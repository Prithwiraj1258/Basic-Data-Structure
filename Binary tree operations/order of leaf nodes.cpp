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
void leaf_nodes(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
    }
    leaf_nodes(root->left, v);
    leaf_nodes(root->right, v);
}
vector<int> order_of_leafs(vector<int> &v)
{
    sort(v.begin(),v.end(),greater<int>());
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
    vector<int> v;
    Node *root = input_tree();
    leaf_nodes(root, v);
    vector<int>q=order_of_leafs(v);
    for(int i=0;i<q.size();i++){
        cout<<q[i]<<" ";
    }
    return 0;
}