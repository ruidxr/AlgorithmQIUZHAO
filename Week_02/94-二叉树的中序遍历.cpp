/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        traversal(root,ans);
        return ans;
    }
    void traversal(TreeNode* root, vector<int> &ans){
        if(root){
            traversal(root->left,ans);            
            ans.push_back(root->val);
            traversal(root->right,ans);
        }
    }
};