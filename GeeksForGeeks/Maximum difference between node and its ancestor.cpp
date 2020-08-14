
/* A binary tree node

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

/* Your are required to
complete this method*/
int findval(Node* root,int &maxval)
{
    if(root==NULL)
    return INT_MAX;
    else
    {
        int a=findval(root->left,maxval);
       int b= findval(root->right,maxval);
      maxval=max(maxval,root->data-a);
      maxval=max(maxval,root->data-b);
       return min(root->data,min(a,b));

    }
}
int maxDiff(Node* root)
{
    int maxval=INT_MIN;
    findval(root,maxval);
    return maxval;
    // Your code here
}
