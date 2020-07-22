/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> v;
        postorder(root, v);
        return v;
    }

    void postorder(Node* root, vector<int>& v) {
        if(root == nullptr)
            return;
        
        for(int i = 0; i < root->children.size(); ++i)
        {
            postorder(root->children.at(i), v);
        }
        v.push_back(root->val);
    }
};