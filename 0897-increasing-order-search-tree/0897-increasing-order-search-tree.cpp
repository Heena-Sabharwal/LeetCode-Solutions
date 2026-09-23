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
    vector<int>res;
public:
    TreeNode* increasingBST(TreeNode* root) {
        if(root==nullptr)
            return nullptr;
        check(root);
        TreeNode* ans=new TreeNode(res[0]);
        TreeNode* temp=ans;

        for(int i=1;i<res.size();i++){
            temp->right=new TreeNode(res[i]);
            temp=temp->right;
        }
        return ans;
    }

    void check(TreeNode* root){
        if(root==nullptr)
            return;
        check(root->left);
        res.push_back(root->val);
        check(root->right);

    }
};