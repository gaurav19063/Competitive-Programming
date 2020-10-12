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
class BSTIterator {
public:
    TreeNode* currNode;
    stack<int> st;
    void findpreorder_reverse(TreeNode*root,stack<int>&st)
    {
        if(!root)
            return;
        else
        {
            findpreorder_reverse(root->right,st);
            st.push(root->val);
            findpreorder_reverse(root->left,st);
        }
    }
    BSTIterator(TreeNode* root) {
     currNode =root;
        findpreorder_reverse(root,st);
    }

    /** @return the next smallest number */
    int next() {
        int n=st.top();
        st.pop();
        return n;

    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !st.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
