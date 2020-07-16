/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// Return the level (0-indexed) with maximum number of nodes.
// #include<ordered_map>
void findMaxNodeLevel(Node* root,unordered_map<int,int>&umap,int k)
{
    if(root)
    {

        if(umap.count(k)==0)
        {
            umap[k]=1;
        }
        else umap[k]++;
        findMaxNodeLevel(root->left,umap,k+1);
        findMaxNodeLevel(root->right,umap,k+1);

    }
}
int maxNodeLevel(Node *root)
{
 // Add your code here
 unordered_map<int,int>umap;
 findMaxNodeLevel(root,umap,0);
 int m=INT_MIN;
 int val=INT_MAX;
 for(auto x: umap)
 {
    if(x.second>=m)
    {

        m=x.second;
        if(val>x.first)
        {
        val=x.first;
        // cout<<val<<" ";
        }

    }

 }
return val;

}
