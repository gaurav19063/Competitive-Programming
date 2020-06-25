#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
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

Node* buildTree()
{
	int d;
	cin>>d;
	Node *nd=new Node(d);
	string s;
	cin>>s;
	if(s=="true")

	nd->left=buildTree();
	else nd->left=NULL;
    cin>>s;
	if(s=="true")
	nd->right=buildTree();
	else nd->right=NULL;
	return nd;

}
void printInorder(Node* root)
{
	if(root)
	{
		printInorder(root->left);
		printInorder(root->right);
		cout<<root->data<<" ";
	}
}
bool isPathSum(Node* root,int sum,int csum)
{

    if(root==NULL&&csum==sum)
    {

    return true;
    }
    else if(root==NULL)
    {
        //  cout<<csum<<" ";
        return false;
    }
    else{
        return isPathSum(root->left,sum,csum+root->data)||isPathSum(root->right,sum,csum+root->data);
    }
}
int main() {
	Node* root=buildTree();
	// printInorder(root);
    int sum;
    cin>>sum;
    cout<<((isPathSum(root,sum,0))?"true":"false");
	return 0;
}
