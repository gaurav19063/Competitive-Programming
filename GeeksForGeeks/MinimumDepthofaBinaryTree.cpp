
/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
int findDepth(Node* root)
{
    if(root==NULL)
    return 0;
    if(!root->left&&!root->right)
    {
        return 1;
    }
    else
    {

        int left=findDepth(root->left);
        int right=findDepth(root->right);
        if(left==0)
        return right+1;
        else if(right==0)
        return left+1;
        else
        return min(left,right)+1;
    }
}

/*You are required to complete this method*/
int minDepth(Node *node) {
    Node* root=node;

    return findDepth(root);
}
