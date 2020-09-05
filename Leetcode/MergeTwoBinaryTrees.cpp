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

    TreeNode* merge(TreeNode* r1,TreeNode* r2)
    {
        if(!r1 && !r2)
        {
            return NULL;
        }
        else if(! r1 &&r2)
        {
            return r2;
        }
        else if(r1 &&!r2)
        {
            return r1;
        }
        else
        {

            TreeNode* nd=new TreeNode(r1->val+r2->val);
           nd->left=merge(r1->left,r2->left);
           nd->right= merge(r1->right,r2->right);

            return nd;

        }


    }

    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {

        return merge(t1,t2);

    }
};
