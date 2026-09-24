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
    int ans=0;
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        check(root, low, high);
        return ans;
    }
    void check(TreeNode* root, int low, int high){
        if(root==nullptr)
            return;
        if(root->val<=high && root->val>=low)
            ans+=root->val;
        check(root->left,low,high);
        check(root->right,low,high);
    }
};