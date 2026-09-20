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
    int findTilt(TreeNode* root) {
        if(root==nullptr)
            return 0;
        int diff=abs(sum_nodes(root->left)-sum_nodes(root->right));
        return diff+findTilt(root->left)+findTilt(root->right);
    }
    int sum_nodes(TreeNode* root){
        if(root==nullptr)
            return 0;

        return root->val+sum_nodes(root->left)+sum_nodes(root->right);
    }
};