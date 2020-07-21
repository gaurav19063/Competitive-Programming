
/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

void findlevelsum(Node* root,unordered_map<int,int> &umap,int l)
{
    if(root)
    {
        umap[l]+=root->data;
        findlevelsum(root->left,umap,l+1);
        findlevelsum(root->right,umap,l+1);
    }
}
/*You are required to complete below method */
int maxLevelSum(Node* root) {
    // Your code here
    unordered_map<int,int> umap;
    findlevelsum(root,umap,0);
    int max1=INT_MIN;
    for(auto x:umap)
    {
        max1=max(max1,x.second);

    }
    return max1;
}
