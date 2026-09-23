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
    unordered_set<int>st;
public:
    int minDiffInBST(TreeNode* root) {
        check(root);
        vector<int>res;
        for(auto it:st)
            res.push_back(it);
        
        sort(res.begin(),res.end());
        int ans=INT_MAX;
        for(int i=1;i<res.size();i++){
            ans=min(ans,abs(res[i]-res[i-1]));
        }
        return ans;
    }

    void check(TreeNode* root) {
        if(root == nullptr)
            return;

        st.insert(root->val);
        check(root->left);
        check(root->right);
    }
};