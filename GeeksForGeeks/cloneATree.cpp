/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node *random;
};
*/

/* The function should clone the passed tree and return
   root of the cloned tree */
Node* cloneTree(Node* tree)
{
   //Your code here
//   return tree;
if(!tree)
return tree;
else
{
    Node* left=cloneTree(tree->left);
   Node* right= cloneTree(tree->right);
   Node* temp=new Node(tree->data);
   temp->left=left;
   temp->right=right;
   return temp;

}
}
