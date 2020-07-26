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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(root == NULL){
            return res;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> temp;
            while(n--){
                vector<Node*> child_node = (q.front())->children;
                temp.push_back((q.front())->val);
                q.pop();
                for(auto node : child_node){
                    if(node){
                        q.push(node);
                    }
                }
            }
            res.push_back(temp);
        }
        return res;
    }

};