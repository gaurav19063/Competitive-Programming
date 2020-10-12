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
    pair<int,int> findBalanced(TreeNode* root)
    {
        if(!root)
        return make_pair(1,0);

        else
        {
            pair<int,int> left=findBalanced(root->left);
            pair<int,int> right=findBalanced( root->right);
            if(!left.first||!right.first||abs(left.second-right.second)>1)
                return make_pair(0,-1);
            else return make_pair(1,max(left.second,right.second)+1);
        }
        }
    bool isBalanced(TreeNode* root) {

        pair<int,int> p=findBalanced(root);
        return p.first;

    }
};
