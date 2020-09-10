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
    pair<int,int> CalDiameter(TreeNode* root)
    {
        if(!root)
        {
            return make_pair(0,0);

        }
        else
        {
        pair<int,int> left=CalDiameter(root->left);
        pair<int,int> right=CalDiameter(root->right);
            return make_pair(max(left.first,right.first)+1,max(max(left.second,right.second),left.first+right.first));

        }
    }

    int diameterOfBinaryTree(TreeNode* root) {
        return CalDiameter(root).second;

    }
};
