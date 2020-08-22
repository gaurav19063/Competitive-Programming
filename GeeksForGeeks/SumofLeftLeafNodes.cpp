
/*Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// function should return the sum of all
// left leaf nodes

void findLeftChildsum(Node* root,int &count)
{
        // Code here
    if(!root)
    return ;
    if(root->left!=NULL&&!root->left->right&&!root->left->left)
    {

       count+=root->left->data;
    }

       findLeftChildsum(root->left,count);
       findLeftChildsum(root->right,count);


}


int leftLeavesSum(Node *root)
{
    int count=0;
    findLeftChildsum(root,count);
return count;
}
