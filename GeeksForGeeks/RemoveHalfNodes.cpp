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

// Return the root of the modified tree after removing all the half nodes.
Node *RemoveHalfNodes(Node *root)
{
   //add code here.
   if(!root)
   return NULL;
   else
   {
       Node* left=RemoveHalfNodes(root->left);
       Node* right=RemoveHalfNodes(root->right);
       root->left=left;
       root->right=right;
       if(left!=NULL&&right!=NULL||!left&&!right)
       return root;
       else if(left)
       return left;
       else return right;

   }
}
