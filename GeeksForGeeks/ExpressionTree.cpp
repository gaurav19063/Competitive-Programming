/*The structure of node is as follows
struct node{
    string data;
    node *left;
    node *right;
};
*/

/*You are required to complete below method */
int evalTree(node* root) {
    // Your code here
    if(!root->left&&!root->right)
    return stoi(root->data);
    else
    {
        int leftdata=evalTree(root->left);
        int rightdata=evalTree(root->right);
        if(root->data=="*")
        return leftdata*rightdata;
        if(root->data=="+")
        return leftdata+rightdata;
        if(root->data=="-")
        return leftdata-rightdata;
        return leftdata/rightdata;
        // return 0;
    }

}
