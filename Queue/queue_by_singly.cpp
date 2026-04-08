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