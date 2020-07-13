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

    void findBottomView(TreeNode* root,map<pair<int,int>,int> &m,int k,int l)
    {
        if(root)
        {
            findBottomView(root->left,m,k-1,l+1);
            findBottomView(root->right,m,k+1,l+1);
            m.insert(make_pair(make_pair(k,l),root->val));
        }

    }

    int findBottomLeftValue(TreeNode* root) {

        map<pair<int,int>,int> m;
        int l;
        findBottomView(root,m,0,0);
        int data;
        int mlevel=-1;
        for(auto x:m)
        {
            // cout<<x.first.first<<" ";
            if(x.first.second>mlevel)
            {
                data=x.second;
                mlevel=x.first.second;
            }
        }
        return data;
    }
};
