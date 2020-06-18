
/*Complete the function below

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
pair<bool,int> sumProp(Node* root)
{
    if(root==nullptr)
    {
        return make_pair(true,0);

    }
    else
    {
        pair<bool,int> left=sumProp(root->left);
        pair<bool,int>right=sumProp(root->right);
        if(root->left==nullptr&&root->right==nullptr)
        return make_pair(true,root->data);
        return make_pair(left.first&&right.first&&(root->data==left.second+right.second),root->data);

    }
}

// Return 1 if all the nodes in the tree satisfy the given property. Else return 0
int isSumProperty(Node *root)
{
 // Add your code here
 pair<bool,int> p=sumProp(root);
 return p.first;
}
