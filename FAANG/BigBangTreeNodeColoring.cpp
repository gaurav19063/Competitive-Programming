#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d)
    {data=d;
    left=NULL;
    right=NULL;

    }
};
Node* buildTree(){
    int d;
    cin>>d;
    if(d==-1) return NULL;
    Node* root=new Node(d);

    root->left=buildTree();
    root->right=buildTree();
    return root;

}
void printInorder(Node* root)
{
    if(root)
    {
        printInorder(root->left);
        printInorder(root-> right);
        cout<<root->data<<' ';
    }
}
Node* findNode(Node* root,int k)
{
    if(root==NULL)
    return NULL;

        else if(root->data==k)
        return root;
        else
        {
            Node* left=findNode(root->left,k);
            Node* right=findNode(root->right,k);
            return left?left:right;

        }

}
int countNodes(Node* root)
{
    if (root==NULL)
    return 0;

        return 1+countNodes(root->left)+countNodes(root->right);

}
bool BigBang( Node* root,int n,int m,int k)
{
    Node* nd= findNode(root,k);
    int leftnodecount=countNodes(nd->left);
    int rightnodecount=countNodes(nd->right);
    int remaining=m-(1+leftnodecount+rightnodecount);
    if(leftnodecount>remaining+rightnodecount) return true;
    else if(rightnodecount> remaining+leftnodecount) return true;
    else if(remaining>leftnodecount+rightnodecount) return true;
    else return false;
}
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    Node* root=buildTree();
    // printInorder(root);
   cout<< BigBang(root,n,m,k);
}
