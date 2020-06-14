#include <iostream>
#include<queue>
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
    if(k==1)
    { cout<<root->data<<" ";

    }
    printTreeAtKthLevel(root->left,k-1);
    printTreeAtKthLevel(root->right,k-1);

}
}
void printTreeAllLevel(node* root)
{
 int height=findHeight(root);
 for(int i=1;i<=height;i++)
 {
     printTreeAtKthLevel(root,i);
     cout<<endl;
 }
}
void printTreeIn(node* root)
{
    if(root)
    {
        printTreeIn(root->left);
        cout<<root->data<<" ";
        printTreeIn(root->right);
    }
}

void LevelOrderBFSPrint(node* root1)
{
queue<node*> q;
q.push(root1);
while(!q.empty())
{
     node* root=q.front();
    q.pop();
    cout<<root->data<<" ";
    if(root->left!=nullptr)
    q.push(root->left);
    if(root->right!=nullptr)
    q.push(root->right);
}
}
int countNodes(node* root)
{
    if(!root)
    return 0;
    else return countNodes(root->left)+countNodes(root->right)+root->data;

}
int treeDim(node* root)
{
    if(!root)
    return 0;
    else{
        int ldim=treeDim(root->left);
        int rdim=treeDim(root->right);
        return max(max(ldim,rdim),findHeight(root->left)+findHeight(root->right)+1);
    }
}
int main() {
node* root=buildtree();
// cout<<findHeight(root);
// cout<<endl;

// printtree(root);
// cout<<endl;
// printTreeIn(root);
// cout<<endl;

// printTreeAtKthLevel(root,2);
// cout<<endl<<endl;

// printTreeAllLevel(root);
// cout<<endl;
// // findHeight()
// LevelOrderBFSPrint(root);
// cout<<countNodes(root);
cout<<treeDim(root);
}
