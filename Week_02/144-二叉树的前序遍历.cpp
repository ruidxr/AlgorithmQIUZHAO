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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        traversal(root,ans);
        return ans;
    }
    void traversal(TreeNode* root, vector<int> &ans){
        if(root){
            ans.push_back(root->val);
            traversal(root->left,ans);
            traversal(root->right,ans);
        }
    }
};