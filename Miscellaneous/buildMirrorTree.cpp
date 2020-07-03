#include <iostream>
#include<vector>
#include<stack>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
void printPre(Node* root)
{
    if(root)
    {
          cout<<root->data<<" ";
        printPre(root->left);

        printPre(root->right);

    }
}
Node* buildTree(vector<int> pre,vector<int> In,int i,int j,int pi)
{
    // cout<<pi<<" ";
    if(i>j)
return NULL;
else
{

    int ind;
    for(int t=i;t<=j;t++)
    {
        if(pre[pi]==In[t])
        {ind=t;

        }
    }

int pi1=pi+1;
int pi2=pi+(ind-i)+1;
    Node* left=buildTree(pre,In,i,ind-1, pi1);
    Node* right=buildTree(pre,In,ind+1,j,pi2);
    Node* root=new Node(In[ind]);
    root->left=left;
    root->right=right;
    return root;

}

}
void PrintPreIteratively(Node* root)
{
    // return ;
    stack<Node*> st;
    Node* temp=root;

    while(root!=NULL||st.empty()==false)
    {
        while(root!=NULL)
        {
            cout<<root->data<<" ";
            st.push(root);
            root=root->left;
        }
        root=st.top();
        st.pop();
        // cout<<root->data<<" ";
        root=root->right;
    }

}
void printPostOrder(Node* root)
{
    stack<Node*> st1;
    stack<Node*>st2;
    st1.push(root);

    while(!st1.empty())
    {
        st2.push(st1.top());
        root=st1.top();
        st1.pop();
        if(root->left)
        st1.push(root->left);
        if(root->right)
        st1.push(root->right);
    }
    // while(!st1.empty())
    // {
    //     st2.push(st1.top());
    //     st1.pop();
    // }
    while(!st2.empty())
    {
        cout<<st2.top()->data<<" ";
        st2.pop();
    }
}
bool isMirror(Node* root1,Node* root2)
{
    if(!root1&&!root2)
    return true;
    else if(!root1||!root2)
    return false;

    else if(root1->data!=root2->data)
    return false ;
    else {
        // cout<<root1->data<<" "<<root2->data<<endl;
        return isMirror(root1->left,root2->right)&&isMirror(root1->right,root2->left);
    }
}
Node* makeMirror(Node* root)
{
    if(!root)
    return NULL;
    else{
        Node* left=makeMirror(root->left);
        Node* right=makeMirror(root->right);
        Node* nd=new Node(root->data);
        nd->left=right;
        nd->right=left;
        return nd;
    }
}
int main() {
    // cout<<"Hello World!";
    int n;
    cin>>n;
    vector<int>pre(n);
    vector<int> In(n);
    for(int i=0;i<2*n;i++)
    {
        i<n?cin>>pre[i]:cin>>In[i%(n)];

    }
    // for(int i=0;i<n;i++)
    // cout<<pre[i]<<" ";
    // cout<<endl;

    Node* root=buildTree(pre,In,0,n-1,0);
     if(!root)
    cout<<" null";


    PrintPreIteratively(root);
    cout<<endl;
    printPostOrder(root);
    cout<<endl;
    printPostOrder(root);
    cout<<endl;
     for(int i=0;i<2*(n);i++)
    {
        i<n?cin>>pre[i]:cin>>In[i%(n)];

    }
    Node* root1=buildTree(pre,In,0,n-1,0);
     printPostOrder(root1);
     cout<<endl;
     cout<<isMirror(root,root1);
     Node* mirror=makeMirror(root);
     cout<<endl;
     printPostOrder(root1);




}
