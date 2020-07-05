/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void findlevelOrderTraversal(map<int,vector<TreeNode*>>  &umap,TreeNode* root,int k)
    {
        if(root)
        {if(umap.count(k))
            umap[k].push_back(root);
         else
         {
             vector<TreeNode*>v;
             v.push_back(root);
             umap.insert(make_pair(k,v));
         }
         findlevelOrderTraversal(umap,root->left,k+1);
         findlevelOrderTraversal(umap,root->right,k+1);
}
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        map<int,vector<TreeNode*>> umap;
        findlevelOrderTraversal(umap,root,0);
        vector<vector<int>> v;
        for(auto x:umap)
        {

            vector<int>temp;

            if(x.first%2==0)
            {
                for(auto it=x.second.begin();it<x.second.end();it++)
                {
                    // cout<<y->val<<" ";
                    temp.push_back((*it)->val);
                }



            }
            else
            {
                for(auto it=x.second.rbegin();it<x.second.rend();it++)
                {
                    temp.push_back((*it)->val);
                }
            }
            v.push_back(temp);


        }
        return v;
    }
};
