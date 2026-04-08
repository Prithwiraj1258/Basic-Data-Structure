#include<bits/stdc++.h>
using namespace std;
class Node {

    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){

        this->val = val;
        this->left = NULL;
        this->right=NULL;
    }
};
void sum_of_nodes(Node *root, vector<int>&v)
{
    if(root==NULL)
    return ;
    if(root->left !=NULL || root->right !=NULL){
     v.push_back(root->val);
    }
    sum_of_nodes(root->left,v);
    sum_of_nodes(root->right,v);
}
int sum_nodes(vector<int> &v,int sum){
    for(int i=0;i<v.size();i++){
        sum=sum+v[i];
    }
    return sum;
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
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    Node *root = input_tree();
    sum_of_nodes(root,v);
    int sum=0;
    int  s=sum_nodes(v,sum);
    cout<<s;
    return 0;
}