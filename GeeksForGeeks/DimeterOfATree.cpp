/* Computes the diameter of binary tree with given root.  */
pair<int,int> dimHeight(Node* root)
{
    if(root==nullptr)
    {
        pair<int ,int> p=make_pair(0,0);
        return p;
    }
    else{

        pair<int ,int>p1=dimHeight(root->left);
        pair<int,int>p2=dimHeight(root->right);
        int height=max(p1.second,p2.second)+1;
        int dim=max(max(p1.first,p2.first),p1.second+p2.second+1);
        return make_pair(dim,height);

    }
}
int diameter(Node* root) {
    // Your code here

    pair<int ,int> p=dimHeight(root);
    return p.first;

}
