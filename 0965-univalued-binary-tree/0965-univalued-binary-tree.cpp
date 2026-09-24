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
    int unival=-1;
public:
    bool isUnivalTree(TreeNode* root) {
        if(root==nullptr)
            return true;
        if(unival==-1)
            unival=root->val;
        if(root->val!=unival)
            return false;
        return isUnivalTree(root->left)&&isUnivalTree(root->right);
    }
};