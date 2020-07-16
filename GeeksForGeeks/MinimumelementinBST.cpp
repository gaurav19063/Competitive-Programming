/*
Structure of the node of the binary search tree is as
struct Node {
    int data;
    Node* right;
    Node* left;

    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

// your task is to complete the below function
int minValue(Node* root)
{
    // Code here
    if(!root)
    return -1;
    else
    {

        int a=minValue(root->left);
        int b=minValue(root->right);
        int m=root->data;
        if(a!=-1)
        m=min(m,a);
        if(b!=-1)
        m=min(m,b);
        return m;
    }
}
