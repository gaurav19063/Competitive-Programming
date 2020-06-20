//function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */


Node* findMirror(Node* root)
{
    if(root==nullptr)
    return root;
    else
    {
        Node* left=findMirror(root->left);
        Node* right=findMirror(root->right);

        root->left=right;
        root->right=left;
        return root;

    }
}
/* Should convert tree to its mirror */
void mirror(Node* node)
{
     // Your Code Here
    findMirror(node);
    //  printPreorder(root);
}
