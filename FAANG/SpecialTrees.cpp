#include <bits/stdc++.h>
#include<vector>
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
// This function finds max index
int MaxInd(vector<int>v,int i,int j)
{
    int ind;
    int maxint=INT_MIN;
    for(int t=i;t<=j;t++ )
    {
       if(maxint<v[t])
       {
           maxint=v[t];
           ind=t;
       }
    }
    return ind;
}
Node* buildSpecialTree(vector<int> v,int i,int j)
{

    // cout<<i<<j<<endl;
    if(i>j)
return NULL;
else if(i==j)
return new Node(v[i]);
else{
    int maxind=MaxInd(v,i,j);
    // cout<<maxind<<endl;
    Node* left=buildSpecialTree(v,i,maxind-1);
    Node* right=buildSpecialTree(v,maxind+1,j);
    Node* nd=new Node(v[maxind]);
    nd->left=left;
    nd->right=right;
    return nd;
}

}
void printInorder(Node* root)
{
    if(root)
    {


        printInorder(root->left);
        cout<<root->data<<" ";
        printInorder(root->right);



    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {int d;
    cin>>d;
    v.push_back(d);
    }

    Node* root;
    root=buildSpecialTree(v,0,n-1);
    printInorder(root);
return 0;}
