#include <iostream>
#include<vector>
#include<cstring>
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
vector<int> getVal()
{ vector<int> v;
    string st;
    // cin>>st;
    getline(cin,st);
    string str="";
   for(int i=0;i<st.size();i++)
   {
       str+=st[i];
    //    cout<<str<<" ";
   if(st[i]==' ')
   {

       v.push_back(stoi(str));
       str="";
   }

   }
   v.push_back(stoi(str));
//  cout<<v.size();

    return v;

}
Node* buildLevelOrderTree(vector<int> v)
{
    vector<Node*> vn(v.size(),NULL);

    if(v[0]==-1)
    return NULL;
    vn[0]=(new Node(v[0]));
    // cout<<vn.size();
    // cout<<vn[0]->data;

    for(int i=1;i<v.size();i++)
    {
        if(v[i]==-1)
        continue;
        vn[i]=new Node(v[i]);
        if(i%2==1)
        {
            vn[(i-1)/2]->left=vn[i];
        }
        else
        {
            vn[(i-1)/2]->right=vn[i];
        }
    }
    // cout<<vn[0]->data;
    return vn[0];

    // for(auto x:v)
    // cout<<x<<" ";

}
Node* buildTree()
{
    vector<int> v=getVal();
    // cout<<v.size();



    Node* root=buildLevelOrderTree(v);

    return root;



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
pair<int,int> findNoOfSubTree(Node* root,int sum)
{
    if(root==nullptr)
    return make_pair(0,0);
    else{
        pair<int ,int> left =findNoOfSubTree(root->left,sum);
        pair<int,int> right=findNoOfSubTree(root->right,sum);
        int data=left.second+right.second+root->data;
        int noOfSubtree=left.first+right.first;
        if(data==sum)
        noOfSubtree+=1;
        return make_pair(noOfSubtree,data);
    }
}
bool findIsMirror(Node* LST,Node* RST)
{
    if(LST==NULL||RST==NULL)
    return LST==RST;
    else if(LST->data==RST->data)
    return true;
    else if(findIsMirror(LST->left,RST->right)&&findIsMirror(LST->right,RST->left)) return true;
    else return false;
}
bool isMirrorEq(Node* root)
{
    if(root==NULL)
    return 1;
    return findIsMirror(root->left,root->right);
}

int main(){
    Node* root=buildTree();
    // printPostOrder(root);

    cout<<(isMirrorEq(root)?"YES":"NO");

return 0;
}
