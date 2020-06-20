
/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return tree if passed  tree
// is balanced, else false.
pair<bool,int> findisBalanced(Node* root)
{
    if (root==nullptr)
    return make_pair(true,0);
    else
    {
        pair<bool,int > left=findisBalanced(root->left);
        pair<bool,int> right=findisBalanced(root->right);
        bool status=left.first&&right.first&&abs(left.second-right.second)<=1;
        int height=max(left.second,right.second)+1;
        return make_pair(status,height);

    }
}
bool isBalanced(Node *root)
{
    //  Your Code here
    pair<bool,int> p =findisBalanced(root);
    return p.first;
}
