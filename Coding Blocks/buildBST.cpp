#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
data=d;
left=NULL;
right=NULL;
    }

};
void printInderder(node* root)
{
    if(root)
    {
        printInderder(root->left);
        cout<<root->data<<" ";
        printInderder(root->right);
    }
}
node* insertNode(node* root,int d)
{
    if(root==NULL)
    {
        root=new node(d);
        return root;
    }
    else
    {
        if(d<=root->data)
        root->left=insertNode(root->left,d);
        else
        root->right=insertNode(root->right,d);
        return root;
    }
}
node* buildBST()
{
    int n;
    cin>>n;
    node* root=NULL;
    while(n--)
    {int d;
         cin>>d;
        root=insertNode(root,d);
    }
    return root;
}
int main() {
    // cout<<"Hello World!"/;
node* root=buildBST();
printInderder(root);
}
