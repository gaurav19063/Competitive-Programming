
/*Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// your task is to complete the function
void printOddNodes(Node *root)
{
    // Code here
    if(root){
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,1));
    while(!q.empty())
    {
        pair<Node*,int> front=q.front();
        q.pop();
        Node* node=front.first;
        int level=front.second;
        if(level%2==1)
        cout<<node->data<<" ";
        if(node->left)
        q.push(make_pair(node->left,level+1));
        if(node->right)
        q.push(make_pair(node->right,level+1));
    }}
    cout<<endl;
}
