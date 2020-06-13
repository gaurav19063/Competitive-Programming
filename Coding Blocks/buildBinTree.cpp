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
int main() {
node* root=buildtree();
printtree(root);

}
