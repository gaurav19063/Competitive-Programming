#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int d)
    {
        val=d;
        left=NULL;
        right=NULL;
    }
};
Node* buildTree(vector<int> &ino,vector<int> &post,int i,int j,int p)
{
    // cout<<i<<" "<<j<<" "<<p<<" "<<post[3]<<endl;
 if(j<i)
 return NULL;
 else if(i==j)
 {
     return new Node(ino[i]);
 }
 else{
     Node* root=new Node(post[p]);
     int ind=0;
     for(int t=i;t<=j;t++)
    { if(ino[t]==post[p])
       ind=t;

    //  else ind=0;
    }
    //  cout<<ind<<endl;
     Node* left=buildTree(ino,post,i,ind-1,p-(j-ind+1));
     Node* right=buildTree(ino,post,ind+1,j,p-1);
     root->left=left;
     root->right=right;
     return root;
 }
}
void printInTree(Node* root)
{
    if(root)
    {
         cout<<root->val<<' ';
        printInTree(root->left);

        printInTree(root->right);

    }
}
int main(){
    int n;
    cin>>n;
    vector<int> ino(n);
    vector<int> post(n);
    for(int i=0;i<2*n;i++)
    {
       ( i<n)?(cin>>ino[i]):(cin>>post[i%n]);
    }
    // for(int i=0;i<n;i++)
    // cout<<post[i]<<" ";
    // cout<<endl;
    Node* root=buildTree(ino,post,0,n-1,n-1);
    printInTree(root);
    return 0;
    }
