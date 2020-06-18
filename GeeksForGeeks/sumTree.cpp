// Should return true if tree is Sum Tree, else false
pair<bool,int> sumTree(Node* root)
{
    if(root==nullptr)
    {
        return make_pair(true,0);
    }
    else
    {
        pair<bool,int> left=sumTree(root->left);
        pair<bool,int> right=sumTree(root->right);
        bool status;
        if(root->left==nullptr&&root->right==nullptr)
        return make_pair(true,root->data);
        if(root->data==left.second+right.second)
        status=true;
        else status=false;
        return make_pair(status&&left.first&&right.first,left.second+right.second+root->data);

    }
}
bool isSumTree(Node* root)
{
     // Your code here
     pair<bool,int >p=sumTree(root);
     return p.first;
}
