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
    unordered_map<int,int>mp;
    int max_freq=0;
public:
    vector<int> findMode(TreeNode* root) {
        check(root);
        vector<int>res;

        for(auto it:mp){
            if(it.second==max_freq)
                res.push_back(it.first);
        }

        return res;
    }

    void check(TreeNode* root){
        if(root==nullptr)
            return;
        
        mp[root->val]++;
        if(mp[root->val]>max_freq)
            max_freq=mp[root->val];

        check(root->left);
        check(root->right);
    }


};