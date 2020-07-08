#include<iostream>
#include<vector>
using namespace std;
class Node{
	public:
	int val;
	Node* left;
	Node* right;
	Node(int d)
	{
val =d;
left=NULL;
right=NULL;
	}
};
Node* buildTree(vector<int> &pre,vector<int>&ino,int i,int j,int &index)
{


	// cout<<i<<" "<<j<<" "<<index<<endl;
	if(j<i)
{
	return NULL;
}
else{
	int p;
	for(int t=i;t<=j;t++)
	{
		if(pre[index]==ino[t])
	{
		// cout<<t;
		p=t;
		// break;
	}
	}
	// cout<<p<<endl;
	// cout<<pre[index]<<index<<endl;
	Node* root=new Node(ino[p]);
	index=index+1;
	root->left=buildTree(pre,ino,i,p-1,index);
	root->right=buildTree(pre,ino,p+1,j,index);
	return root;

}

}
void printTree(Node* root)
{
	if(root)
	{
		if(!root->left)
		cout<<"END => ";
		else cout<<root->left->val<<" => ";
		cout<<root->val;
		if(!root->right)
		cout<<" <= END"<<endl;
		else cout<<" <= "<<root->right->val<<endl;
		printTree(root->left);

		printTree(root->right);
		// cout<<root->val<<" ";
	}
}
int main() {
	int n;
	cin>>n;
	vector<int> pre(n);
	for(int i=0;i<n;i++)
	cin>>pre[i];
	int m;
	cin>>m;
	if(n!=m)
	return 0;
	vector<int >ino(m,0);
	for(int i=0;i<m;i++)
	cin>>ino[i];
	int index=0;


	// for(int i=0;i<n;i++)
	// cout<<ino[i]<<" ";
	Node* root=buildTree(pre,ino,0,n-1,index);
	printTree(root);
	return 0;
}
