
/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should print right view of tree
void findRightView(Node* root,int k,map<int,int> &m)
{
    if(root)
    {
        findRightView(root->right,k+1,m);
        findRightView(root->left,k+1,m);
        m.insert(make_pair(k,root->data));
    }

}
void rightView(Node *root)
{
   // Your Code here
   map<int,int> m;
   findRightView(root,1,m);
//   cout<<m.size()<<endl;
   for(auto x:m)
   {
       cout<<x.second<<" ";
   }
}
