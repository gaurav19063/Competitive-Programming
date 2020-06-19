
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

// Return True if the given trees are isomotphic. Else return False.
bool isIsomorphic(Node *root1,Node *root2)
{
//add code here.
if(root1==nullptr&&root2==nullptr)
return true;
else if(root1==nullptr||root2==nullptr)
{
    return false;
}
else if(root1->data!=root2->data)
return false;
else
{
    bool l1=isIsomorphic(root1->left,root2->right);
    bool r1=isIsomorphic(root1->right,root2->left);
    bool l2=isIsomorphic(root1->left,root2->left);
    bool r2=isIsomorphic(root1->right,root2->right);


    return l1&&r1||l2&&r2;

}
}
