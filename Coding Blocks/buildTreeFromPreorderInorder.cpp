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

void printTreePostOrder(node * root)
{
    if(root)

    {
        printTreePostOrder(root->left);
        printTreePostOrder(root->right);
        cout<<root->data<<" ";

    }
}
node* buildtreewithPreIn(int a[1000],int b[1000],int s,int e)
{
// cout<<s<<" "<<e<<endl;
if(s<=e)
{
   int i=s;
   int index=0;
for(;i<=e;i++)
if(a[0]==b[i])
{ index=i;
    break;
}
// cout<<index<<endl;
node* leftsub=buildtreewithPreIn(a+1,b,s,index-1);
node * rightsub=buildtreewithPreIn(a+(index-s)+1,b,index+1,e);
node* nd=new node(b[index]);
nd->left=leftsub;
nd->right=rightsub;
return nd;
}
    return nullptr;
}
int main() {
    // cout<<"Hello World!";
    int a[1000],b[1000];
    int n;
    cout<<"Enter no of nodes"<<endl;
    cin>>n;
    cout<<"Enter Nodes in preorder"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter Nodes in Inorder"<<endl;
    for(int i=0;i<n;i++)
    cin>>b[i];
    node * root=buildtreewithPreIn(a,b,0,n-1);
    cout<<endl;
    printTreePostOrder(root);
}
