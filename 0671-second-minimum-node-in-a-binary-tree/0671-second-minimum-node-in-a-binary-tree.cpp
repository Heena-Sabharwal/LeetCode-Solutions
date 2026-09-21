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
    long int first=LLONG_MAX;
    long int second=LLONG_MAX;
    
public:
    int findSecondMinimumValue(TreeNode* root) {
        check(root);
        if(second==LLONG_MAX)
            return -1;
        return second;
    }
    void check(TreeNode* root){
        if(root==nullptr)
            return;
        if(root->val<first){
            second=first;
            first=root->val;
        }
        if(root->val<second && root->val!=first){
            second=root->val;
        }
        check(root->left);
        check(root->right);
    }
};