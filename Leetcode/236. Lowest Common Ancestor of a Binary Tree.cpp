/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    pair<TreeNode*,pair<int,int>> findLCA(TreeNode* root,TreeNode* p,TreeNode* q)
    {
        if(!root)
            return make_pair(root,make_pair(0,0));
        else
        {
            pair<TreeNode*,pair<int,int>> left=findLCA(root->left,p,q);
            pair<TreeNode*,pair<int,int>> right=findLCA(root->right,p,q);
            if(root==p)
            {
                if(left.second.second||right.second.second)
                {
                    return make_pair(root,make_pair(1,1));

                }
                else
                    return make_pair(root,make_pair(1,0));
            }
           else if(root==q)
            {
                if(left.second.first||right.second.first)
                {
                    return make_pair(root,make_pair(1,1));
                }
               else return make_pair(root,make_pair(0,1));
            }
            else if(left.second.first&&right.second.second||left.second.second&&right.second.first)
                return make_pair(root,make_pair(1,1));
            else return left.second.first||left.second.second?left:right;
        }
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        pair<TreeNode*,pair<int,int>> pa=findLCA(root,p,q);
        return pa.first;

    }
};
