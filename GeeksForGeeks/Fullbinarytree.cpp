/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// Return True if the given Binary Tree is a Full Binary Tree. Else return False
bool isFullTree (struct Node* root)
{
//add code here.
if(root==NULL)
return true;
else if(!root->left&&!root->right)
return true;
else if(!root->left||!root->right)
return false;
return isFullTree(root->left)&&isFullTree(root->right);
}
