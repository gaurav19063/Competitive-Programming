
/*
The structure of Link list Node is as follows
struct Node
{
    int data;
    struct node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
The structure of TreeNode is as follows
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
*/

/*You are required to complete this method*/
void convert(Node *head, TreeNode *&root) {
    // Your code here
    if(head==NULL)
    return;
    // root=NULL;
    vector<TreeNode*> v;
    while(head)
    {
        v.push_back(new TreeNode(head->data));
        head=head->next;

    }
    int n=v.size();
    for(int i=0;i<n/2;i++)
    {
        if(2*i+1<n)
        v[i]->left=v[i*2+1];
        if(2*i+2<n)
        v[i]->right=v[2*i+2];
    }

root= v[0];

}
