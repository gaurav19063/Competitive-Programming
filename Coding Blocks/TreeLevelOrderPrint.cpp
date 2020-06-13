#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node* right;
    node(int d)
    {
        data=d;
    }
};
// node* root=nullptr;
node* buildtree()
{
    int d;
    cin>>d;
    if(d==-1)
    return nullptr;
    else
    {
        node *nd=new node(d);
        node* l=buildtree();
        node* r=buildtree();
        nd->left=l;
        nd->right=r;
        return nd;
    }
    return nullptr;
}
void printtree(node * root)
{
    if(root)
    {
        cout<<root->data<<" ";
        printtree(root->left);
        printtree(root->right);
    }
}
int findHeight(node* root)
{
    if(root)
    {
        return max(findHeight(root->left),findHeight(root->right))+1;
    }
    return 0;
}
void printTreeAtKthLevel(node * root,int k)
{
     if(root)
{
    if(findHeight(root)==k)
    { cout<<root->data<<" ";

    }
    printTreeAtKthLevel(root->left,k);
    printTreeAtKthLevel(root->right,k);

}
}
void printTreeAllLevel(node* root)
{
 int heignt=findHeight(root);
 for(int i=heignt;i>0;i--)
 {
     printTreeAtKthLevel(root,i);
     cout<<endl;
 }
}
int main() {
node* root=buildtree();
cout<<findHeight(root);
cout<<endl;

printtree(root);
cout<<endl;

printTreeAtKthLevel(root,2);
cout<<endl<<endl;

printTreeAllLevel(root);
cout<<endl;

}
