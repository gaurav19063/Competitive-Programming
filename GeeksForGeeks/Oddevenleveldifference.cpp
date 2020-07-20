
/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

void findsums(Node* root,int &odd,int &even,int l)
{
    if(root)
    {
        if(l&1>0)
        odd+=root->data;
        else
        even+=root->data;
        findsums(root->left,odd,even,l+1);
        findsums(root->right,odd,even,l+1);
    }
}

/*You are required to complete this function*/
int getLevelDiff(Node *root)
{
   //Your code here
   int odd=0,even=0;
   findsums(root,odd,even,1);
   return odd-even;
}
