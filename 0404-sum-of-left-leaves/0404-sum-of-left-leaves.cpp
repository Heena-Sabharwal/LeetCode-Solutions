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
    int res=0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==nullptr)
            return 0;
        if(root->left && root->left->left==nullptr && root->left->right==nullptr)
            res+=root->left->val;
        int h=sumOfLeftLeaves(root->left);
        int y=sumOfLeftLeaves(root->right);
        return res;
    }
};