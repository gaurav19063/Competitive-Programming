#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int i)
    {
        data=i;
        left=nullptr;
        right=nullptr;
    }

};
node* buildBalancedTree(int a[1000],int s,int e)
{
if(s>e)
return nullptr;

else
{
   int  mid=(s+e)/2;
    node* lefttree=buildBalancedTree(a,s,mid-1);
    node* righttree=buildBalancedTree(a,mid+1,e);
node* nd=new node(a[mid]);
nd->left=lefttree;
nd->right=righttree;
return nd;


}
}
void printTree(node * root)
{
    if(root)

    {
        cout<<root->data<<" ";
        printTree(root->left);

        printTree(root->right);
    }
}
int main() {
    // cout<<"Hello World!";
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    node* root=buildBalancedTree(a,0,n-1);
    printTree(root);
}
