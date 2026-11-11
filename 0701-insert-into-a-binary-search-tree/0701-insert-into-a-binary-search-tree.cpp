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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
            return new TreeNode(val);
        
        TreeNode* parent=NULL;
        TreeNode* temp=root;
        int where=0;
        while(temp){
            parent=temp;
            if(temp->val>val){
                temp=temp->left;
                where=0;
            }
            else{
                temp=temp->right;   
                where=1;
            }     
        }

        if(where==0){
            parent->left=new TreeNode(val);
        }
        else{
            parent->right=new TreeNode(val);
        }

        return root;

    }
};