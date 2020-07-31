
/*Complete the function below
Node is as follows:
struct Node{
    int data;
    Node *left,*right;
};
*/
void findDigonalsum(Node* root,vector<int> &v,int k)
{
    if(root)
    {
        if(v.size()==k)
        v.push_back(root->data);
        else

      v[k]=v[k]+root->data;
       findDigonalsum(root->left,v,k+1);
       findDigonalsum(root->right,v,k);
    }
}
vector <int> diagonalSum(Node* root) {
    // Add your code here
    vector<int> v;
    findDigonalsum(root,v,0);
    return v;
}
