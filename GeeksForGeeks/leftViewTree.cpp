
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// A wrapper over leftViewUtil()
// void leftView(Node *root)
// {
//   // Your code here
// }
void findLeftView(Node* root,int k,map<int,int> &m)
{
    if(root)
    {
        findLeftView(root->left,k+1,m);
        findLeftView(root->right,k+1,m);
        m.insert(make_pair(k,root->data));
    }

}
void leftView(Node *root)
{
   // Your Code here
   map<int,int> m;
   findLeftView(root,1,m);
//   cout<<m.size()<<endl;
   for(auto x:m)
   {
       cout<<x.second<<" ";
   }
}
